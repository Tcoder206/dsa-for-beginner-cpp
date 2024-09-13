/*

1, 2, 4, 6, 9, 10, 13
x = 16

l = 0, r = 6
a[0] + a[6] = 1 + 13 = 14 < x   -> Tăng l -> l = 1
a[1] + a[6] = 2 + 13 = 15 < x   -> Tăng l -> l = 2
a[2] + a[6] = 4 + 13 = 17 > x   -> Giảm r -> r = 5
a[2] + a[5] = 4 + 10 = 14 < x   -> Tảng l -> l = 3
a[3] + a[5] = 6 + 10 = 16 = x   -> Thỏa mãn -> Dừng

*/

#include<iostream>
using namespace std;
int main() {
    int n = 7;
    int a[n] = {1, 2, 4, 6, 9, 10, 13};
    int x = 16;
    bool check = false;
    int l = 0;
    int r = n - 1;
    while(l < r) { // l và r phải là 2 số khác nhau, ko đc bằng nhau
        if(a[l] + a[r] == x) {
            check = true;
            cout << a[l] << " " << a[r] << endl;
            break;
        } else if(a[l] + a[r] > x) {
            r--; // Nếu tổng lớn hơn thì giảm r để tổng nhỏ đi
        } else {
            l++; // Nếu tổng bé hơn thì tăng l để tổng lớn đi
        }
    }
    cout << (check ? "Found Result" : "No Solution");
    return 0;
}