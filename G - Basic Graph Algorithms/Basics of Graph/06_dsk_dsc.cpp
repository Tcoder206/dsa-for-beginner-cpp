/*
Input:
5
2 3 4
1 3 4 5
1 2 4 5
1 2 3 5
2 3 4
Output:
1 2
1 3
1 4
2 3
2 4
2 5
3 4
3 5
4 5
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; cin.ignore();
    vector<pair<int,int>> a;
    for(int i = 1; i <= n; i++) {
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> num) {
            if(i < stoi(num)) a.push_back({i, stoi(num)});
        }
    }
    for(auto it : a) cout << it.first << " " << it.second << endl;
    return 0;
}