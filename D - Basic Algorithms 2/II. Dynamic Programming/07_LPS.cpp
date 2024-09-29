/*

Note: Tại sao dùng ans = max(ans, len) thay vì ans = len
- Nếu trực tiếp dùng ans = len thì kết quả trước đó sẽ bị ghi đè lên
- Dùng max sẽ ko xóa giá trị trước đó mà lưu lại, đồng thời tiện cho việc so sánh 2 giá trị trước và sau

abbcaac
4

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int n = s.size();
    s = " " + s; // Vì index bắt đầu từ 0 nên thêm 1 char bất kỳ trước s để xét index của s từ 1
    bool dp[n + 1][n + 1];
    memset(dp, false, sizeof(dp));
    for(int len = 1; len <= n; len++) dp[len][len] = true; // Xâu con độ dài là 1 luôn đúng
    int ans = 1; // Những ký tự như a, b, c,... đều có chuỗi đối xứng là 1
    for(int len = 2; len <= n; len++) { // Xét từ xâu có độ dài là 2
        for(int i = 1; i <= n - len + 1; i++) {
            int j = i + len - 1; // Ký tự cuối cùng
            if(len == 2 && s[i] == s[j]) dp[i][j] = true; // Xâu có độ dài là 2 ko có ký tự nào ở giữa
            else dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]); // Xét các phần tử ở giữa xem cs bằng nhau ko
            if(dp[i][j]) ans = max(ans, len); // Nếu đúng là chuỗi đối xứng thì cập nhật độ dài của nó 
        }
    }
    cout << ans << endl;
    return 0;
}