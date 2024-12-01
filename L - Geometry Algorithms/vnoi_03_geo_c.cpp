/*
Diện tích đa giác

Input: 
4
4 10
9 7
11 2
2 2

Output: 45.5
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    vector<pair<ll,ll>> coord;
    ll main_diag = 0, second_diag = 0;
    for(int i = 0; i < t; i++) {
        ll x, y;
        cin >> x >> y;
        coord.push_back({x, y});
        if(i > 0) {
            main_diag += (coord[i - 1].first * y);
            second_diag += (x * coord[i - 1].second);
        }
    }
    main_diag += (coord[t - 1].first * coord[0].second);
    second_diag += (coord[0].first * coord[t - 1].second);
    long double res = abs(main_diag - second_diag) * 0.5;
    cout << setprecision(7) << res << endl;
    return 0;
}