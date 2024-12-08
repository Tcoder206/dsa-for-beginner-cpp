// /*
// Khoảng cách giữa 2 đường thẳng
// */
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// double distance(pair<ll, ll> p1, pair<ll, ll> p2, pair<ll, ll> v) {
//     ll coeff = -(p2.first * v.first + p2.second * v.second);
//     return abs(p1.first * v.first + p1.second * v.second + coeff)/hypot(v.first, v.second);
// }
// int main() {
//     ll x1, y1, x2, y2, x3, y3, x4, y4;
//     cin >> x1 >> y1 >> x2 >> y2;
//     cin >> x3 >> y3 >> x4 >> y4;
//     ll px12 = x1 - x2, py12 = y1 - y2, px34 = x3 - x4, py34 = y3 - y4;
//     double line12 = hypot(px12, py12);
//     double line34 = hypot(px34, py34);
//     double point1 = distance({x1, y1},{x3, y3},{px34, py34});
//     double point2 = distance({x2, y2},{x3, y3},{px34, py34});
//     double point3 = distance({x3, y3},{x1, y1},{px12, py12});
//     double point4 = distance({x4, y4},{x1, y1},{px12, py12});
//     double res;
//     if(px12*py34 == px34*py12){
//         res = min(min(line12, line34), min(min(point1, point2), min(point3, point4)));
//     } else {
//         res = 0;
//     }
//     cout << setprecision(7) << res << endl;
//     return 0;
// }