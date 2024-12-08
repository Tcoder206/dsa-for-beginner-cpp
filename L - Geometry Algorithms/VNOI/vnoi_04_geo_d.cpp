/*
Phương trình đường phân giác
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main() {
    int xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA; // X
    cin >> xB >> yB; // Y
    cin >> xC >> yC; // Z
    ll xAB = yB - yA;
    ll yAB = xA - xB;
    double denoAB = hypot(xAB, yAB);
    ll xAC = yC - yA;
    ll yAC = xA - xC;
    double denoAC = hypot(xAC, yAC);
    ll coeffAB = -(xAB * xB + yAB * yB);
    ll coeffAC = -(xAC * xC + yAC * yC);
    ld a = xAB / denoAB + xAC / denoAC;
    ld b = yAB / denoAB + yAC / denoAC;
    ld c = coeffAB / denoAB + coeffAC / denoAC;
    cout << setprecision(7) << a << " " << b << " " << c << endl;
    return 0;
}