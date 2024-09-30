/*

Thuật toán Euclid tìm ƯCLN

4 6 -> 6 4 -> 4 2 -> 2 0

4 6 
-> 4 6 -> 6 4
-> 2 4 -> 4 2
-> 0 2 -> 2 0
-> b = 0 -> return a = 2

*/

#include<bits/stdc++.h>
using namespace std;
int gcd1(int a, int b) { // Greatest Common Divisor
    return !b ? a : gcd1(b, a % b); // Dùng đệ quy
}

int gcd2(int a, int b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) { // Least Common Multiple
    return (a * b)/gcd1(a, b);
}

int main() {
    int a = 120;
    int b = 100;
    cout << "ƯCLN (GCD): " << gcd1(a, b) << " " << gcd2(a, b) << endl;
    cout << "BCNN (LCM): " << lcm(a, b);
    return 0;
}