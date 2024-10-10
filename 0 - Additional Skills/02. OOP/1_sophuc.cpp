#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct sophuc {
    private: ll re, im;
    public:
    friend istream& operator >> (istream& in, sophuc& k) {
        in >> k.re >> k.im;
        return in;
    }
    friend ostream& operator << (ostream& out, sophuc& k) {
        out << k.re << " " << k.im;
        return out;
    }
    friend sophuc operator + (sophuc x, sophuc y) {
        sophuc z;
        z.im = x.im + y.im;
        z.re = x.re + y.re;
        return z;
    }
    friend sophuc operator - (sophuc x, sophuc y) {
        sophuc z;
        z.im = x.im - y.im;
        z.re = x.re - y.re;
        return z;
    }
    friend sophuc operator * (sophuc x, sophuc y) {
        /* (a + bi)(c + di) = ac + adi + bci - bd = ac - bd + (ad + bc)i */
        sophuc z;
        z.re = x.re * y.re - x.im * y.im;
        z.im = x.re * y.im + x.im * y.re;
        return z;
    }
    
};
int main() {
    sophuc a, b;
    cin >> a >> b;
    sophuc tong = a + b;
    cout << "Tong: " << tong << endl;
    sophuc hieu = a - b;
    cout << "Hieu: " << hieu << endl;
    sophuc tich = a * b;
    cout << "Tich: " << tich << endl;
    return 0;
}