/*

((()))
Valid

((())
Invalid

(()))
Invalid

(()()(())()(()))
Valid

*/

#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
    string s; cin >> s;
    stack<char> bracket;
    for(char x : s) {
        if(x == '(') {
            bracket.push(x);
        } else {
            if(bracket.empty()) {
                cout << "Invalid" << endl;
                return 0; // Lệnh break chỉ dừng vòng lặp, còn return thì sẽ dừng cả hàm
            } else {
                bracket.pop();
            }
        }
    }
    if(bracket.empty()) cout << "Valid" << endl;
    else cout << "Invalid" << endl;
    return 0;
}