/*

Input:
2
0
ABCC
1
ABCC

Output:
6
3

*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while(t--) {
        int k; cin >> k; string s; cin >> s;
        map<char, int> chars;
        for(char x : s) chars[x]++;
        priority_queue<int> temp;
        for(auto it : chars) temp.push(it.second);
        while(k > 0) {
            int top = temp.top(); temp.pop();
            --top; --k; // Giảm đồng thời key của xâu lớn nhất và k
            temp.push(max(0, top)); // Vì đã pop nên sau khi giảm phải đẩy vào temp
            // sử dụng max(0, top) để đảm bảo ko bị giảm xuống số âm
        }
        ll ans = 0;
        while(!temp.empty()) {
            ans += temp.top() * temp.top();
            temp.pop();
        }
        cout << ans << endl;
    }
    return 0;
}