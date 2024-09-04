/*

*/

#include<bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++) { // Số nguyên tố bắt đầu từ số 2
        if(n % i == 0) return 0; // Nếu là số nguyên tố in ra 0
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}