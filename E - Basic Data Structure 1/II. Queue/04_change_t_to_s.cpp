/*
Input:
3
2 5
3 7
7 4
Output: 
4
4
3
0
*/

#include<bits/stdc++.h>
using namespace std;
int changeTtoS(int a, int b) {
    queue<pair<int, int>> temp;
    set<int> res;
    res.insert(a);
    temp.push({a, 0});
    while(!temp.empty()){
        pair<int, int> top = temp.front();
        temp.pop();
        if(top.first == b) return top.second;
        if(top.first * 2 == b || top.first - 1 == b) return top.second + 1;
        if(res.find(top.first * 2) == res.end() && top.first < b) { // Nếu nhỏ hơn số b thì nhân 2
            temp.push({ top.first * 2, top.second + 1 });
            res.insert(top.first * 2);
        }
        if(res.find(top.first - 1) == res.end() && top.first > 1) { // Nếu lớn hơn 1 thì mới đc trừ 1
            temp.push({ top.first - 1, top.second + 1 });
            res.insert(top.first - 1);
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        cout << changeTtoS(a, b) << endl;
    }
    return 0;
}