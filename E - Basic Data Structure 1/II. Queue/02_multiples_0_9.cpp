/*

Input:
2
5
7

Output:
90
9009

*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> res;
const int maxSize = 10; // Độ dài tối đa của string
const int condition = 100; // Đk: 1 <= N <= 100
ll ans[condition + 1]; // Kết quả cuối cùng
void multiples() {
    queue<string> temp;
    temp.push("9");
    res.push_back(9);
    while(true) {
        string top = temp.front();
        temp.pop();
        if(top.length() == maxSize) break;
        temp.push(top + "0");
        temp.push(top + "9");
        res.push_back(stoll(top + "0")); // Hàm stoll để chuyển từ string sang dạng long long
        res.push_back(stoll(top + "9"));
    }
    for(int i = 1; i <= condition; i++) {
        for(ll x : res) {
            if(x % i == 0) {
                ans[i] = x;
                break;
            }
        }
    }
}
int main() {
    multiples();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}