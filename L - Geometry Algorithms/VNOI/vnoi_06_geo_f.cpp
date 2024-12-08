/*
Khoảng cách từ 1 điểm đến đường thẳng 2
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    ll nxBC = yB - yC, nyBC = xC - xB;
    double res = abs(nxBC * xA + nyBC * yA - (nxBC * xC + nyBC * yC)) / hypot(nxBC, nyBC);
    cout << setprecision(7) << res << endl;
    return 0;
}