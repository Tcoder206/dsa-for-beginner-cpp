/*
Khoảng cách từ 1 điểm đến đường thẳng
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    double res = abs(a*x + b*y + c) / hypot(a, b);
    cout << setprecision(6) << fixed << res << endl;
    return 0;
}