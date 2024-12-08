/*
Góc giữa 2 vector
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x0, y0, x1, y1;
    cin >> x0 >> y0;
    cin >> x1 >> y1;
    double nume = x0 * y1 + x1 * y1; // Tích vô hướng
    double deno = hypot(x0, y0) * hypot(x1, y1); // Tích độ dài
    // Phạm vi góc khi dùng acos là [0, pi] -> T/m ycđb
    // Tập giá trị thuộc [-1; 1] nên phải so sánh vs max min
    double angle = acos(max(-1.0, min(1.0, nume / deno)));
    cout << setprecision(8) << angle;
    return 0;
}

// Cách 2:
//
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int x0, y0, x1, y1;
//     cin >> x0 >> y0;
//     cin >> x1 >> y1;
//     double angle0 = atan2(y0, x0);
//     double angle1 = atan2(y1, x1);
//     double angle = abs(angle0 - angle1);
//     if(angle < 0) angle += M_PI;
//     // Nếu góc giữa > pi thì lấy 2pi (cung tròn lượng giác) trừ đi để ra góc bé
//     if(angle > M_PI) angle = 2 * M_PI - angle;
//     cout << setprecision(8) << angle;
//     return 0;
// }