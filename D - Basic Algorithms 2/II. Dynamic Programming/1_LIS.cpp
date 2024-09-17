/*
n = 6
a[n] = 1 2 5 4 6 2
b[n] = 10 20 10 30 20 50
i = 1 2 3 4 5
j =   2 3 4 5 6
L = 1 1 1 1 1 1
*/

// Độ phức tạp: O(n^2)

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> L(n, 1);
    for(int i = 1; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[i]) L[i] = max(L[i], L[j] + 1); // 
        } 
    }
    cout << *max_element(L.begin(), L.end()) << endl;
    return 0;
}