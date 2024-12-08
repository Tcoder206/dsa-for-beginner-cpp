/*
Khoảng cách từ 1 điểm đến đoạn thẳng
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA;
    cin >> xB >> yB >> xC >> yC;
    ll nxBC = yB - yC, nyBC = xC - xB;
    double res;
    if(((xA - xB) * nyBC + (yA - yB) * -nxBC) < 0) { // Nếu là góc tù -> A gần B
        res = hypot(xA - xB, yA - yB);
    } else if(((xA - xC) * nyBC + (yA - yC) * -nxBC) > 0) { // Nếu là góc nhọn -> A gần C
        res = hypot(xA - xC, yA - yC);
    } else {
        res = abs(nxBC * xA + nyBC * yA - (nxBC * xC + nyBC * yC)) / hypot(nxBC, nyBC);
    }
    cout << setprecision(7) << res << endl;
    return 0;
}