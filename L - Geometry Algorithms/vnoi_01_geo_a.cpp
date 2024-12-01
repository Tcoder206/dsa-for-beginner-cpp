/*
Góc của điểm trong hệ tọa độ cực
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if(-1e9 < x && x < 1e9 && -1e9 < y && y < 1e9) {
        double angle = atan2(y, x);
        // Đưa góc về để thoả mãn góc thuộc [0, 2pi)
        // atan2 thuộc [-pi; pi] nên ko cần xét góc > pi
        if(angle < 0) angle += 2 * M_PI;
        // Sai số ko quá 10^-6 nên setprecision lớn hơn 6 để ko làm tròn quá sớm
        cout << setprecision(7) << angle;
    }
    return 0;
}