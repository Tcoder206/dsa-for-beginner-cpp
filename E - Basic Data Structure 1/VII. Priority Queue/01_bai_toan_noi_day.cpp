/*

priority_queue<int> hoặc priority_queue<int, vector<int>>
- Sử dụng max heap
- Lưu vào vector trước rồi mới sắp xếp thành dạng heap

priority_queue<int, vector<int>, greater<int>>
- greater<int> sẽ sắp xếp theo dạng min heap
- less<int> sẽ sắp xếp theo dạng max heap (Mặc định nếu ko có greater)

Input:
    2
    4
    4 3 2 6
    5
    4 2 7 6 9
Output:
    29
    62
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; int a[n];
        for(int &x : a) cin >> x; // Input từng phần tử trong mảng a
        priority_queue<int, vector<int>, greater<int>> temp;
        for(int &x : a) temp.push(x); // Đẩy từng phần tử vào để xét
        ll ans = 0;
        while(temp.size() > 1) {
            // Lấy ra 2 sợi dây ngắn nhất
            ll top1 = temp.top(); temp.pop();
            ll top2 = temp.top(); temp.pop();
            ans += top1 + top2;
            temp.push(top1 + top2);
        }
        cout << ans << endl;
    }
    return 0;
}