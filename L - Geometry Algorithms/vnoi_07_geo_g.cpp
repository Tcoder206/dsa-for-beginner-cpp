/*
Khoảng cách từ 1 điểm đến tia
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    ll nxBC = yB - yC, nyBC = xC - xB;
    double res;
    double dot = (xA - xB) * nyBC + (yA - yB) * -nxBC;
    if(dot >= 0){
        res = abs(nxBC * xA + nyBC * yA - (nxBC * xC + nyBC * yC)) / hypot(nxBC, nyBC);
    } else {
        res = hypot(xA - xB, yA - yB);
    }
    cout << setprecision(7) << res << endl;
    return 0;
}