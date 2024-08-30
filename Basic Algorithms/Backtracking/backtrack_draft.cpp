/*

Quay lui xâu nhị phân có độ dài N

Nếu N = 3;
x[3] = 0
nếu 3 == 3

*/

#include<bits/stdc++.h>
using namespace std;

int N = 3;
int X[100];

void result() {
    for(int i = 0; i < N; i++) {
        cout << X[i];
    }
    cout << endl;
}

void backtrack(int i) {
    for(int j = 0; j <= 1; j++) {
        X[i] = j;
        if(i == N) {
            result();
        } else {
            backtrack(i + 1);
        }
    }
}

int main() {
    backtrack(1);
    return 0;
}
