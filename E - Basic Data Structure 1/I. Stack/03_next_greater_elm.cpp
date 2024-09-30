/*
Input:
7
3 4 2 5 1 6 2
Output:
4 5 5 6 6 -1 -1

*/

#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> res(n, -1);
    stack<int> temp;
    for(int i = 0; i < n; i++) {
        while(!temp.empty() && a[temp.top()] < a[i]) {
            res[temp.top()] = a[i];
            temp.pop();
        }
        temp.push(i); // Dòng này đặt sau while mục đích để đẩy index hiện tại vào stack mỗi khi stack rỗng
    }
    for(int x : res) cout << x << " ";
    return 0;
}