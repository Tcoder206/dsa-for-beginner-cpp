/*
Input:
5
0 1 1 1 0
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
Output:
1 : 2 3 4
2 : 1 3 4 5
3 : 1 2 4 5
4 : 1 2 3 5
5 : 2 3 4
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; int a[n + 1][n + 1] = {0};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    vector<int> res[n + 1];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i][j]) {
                res[i].push_back(j);
                // res[j].push_back(i); // Dòng này xảy ra khi có đkien i < j
            }
        }
    }
    return 0;
}