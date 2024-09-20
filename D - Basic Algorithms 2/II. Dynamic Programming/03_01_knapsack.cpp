/*

Bài toán cái túi 0/1 (Mỗi vật chỉ đc chọn 1 lần hoặc ko chọn)

Input:
- n: Số lượng vật
- S: Khối lượng tối đa của cái túi
- w[i]: Khối lượng của vật thứ i
- v[i]: giá trị của vật thứ i
Output: giá trị lớn nhất có thể lấy từ các đồ vật đc chọn

Note:
- i (tung) xét thứ tự đồ vật
- j (hoành) xét trọng lượng lần lượt của vật cho đến S


4 6 
2 1 4 3
3 3 4 2
8

3 50
10 20 30
60 100 120

6 22
39 44 4 59 91 70
47 26 92 33 6 69
92

7 22
10 3 22 50 83 16 41
99 97 54 19 50 70 48
196
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, s; cin >> n >> s;
    int w[n + 1], v[n + 1];
    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) cin >> v[i];
    int dp[n + 1][s + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= s; j++) {
            if(i == 0 || j == 0) {
                dp[i][j] = 0; // Ko chọn vật ko có khối lượng hoặc ko có giá trị
            } else {
                dp[i][j] = dp[i - 1][j]; // Lưu lại đồ vật đã bỏ lần trước
                if(j >= w[i]) { // Nếu khối lượng của vật bé hơn bằng khối lượng j
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
                    // j - w[i]: Khối lượng vừa đủ của đồ thứ i - 1 để nhét thêm v[i]
                    // dp[i - 1][j - w[i]]: Xét vật thứ i nào mà có khối lượng j - w[i] 
                    // + v[i] : Nhét thêm vật có giá trị i vào
                }
            }
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}