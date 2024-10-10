#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(ll a, ll b) {
    return !b ? a : gcd(b, a % b);
}

struct phanso {
    private:
    ll tu, mau;
    public:
    phanso& rutgon() {
        ll rg_val = gcd(tu, mau);
        tu /= rg_val;
        mau /= rg_val;
        return *this;
    }
    friend phanso operator + (phanso a, phanso b) {
        phanso c;
        c.tu = a.tu * b.mau + b.tu * a.mau;
        c.mau = a.mau * b.mau;
        return c.rutgon();
    }
    friend phanso operator - (phanso a, phanso b) {
        phanso c;
        c.tu = a.tu * b.mau - b.tu * a.mau;
        c.mau = a.mau * b.mau;
        return c.rutgon();
    }
    friend phanso operator * (phanso a, phanso b) {
        phanso c;
        c.tu = a.tu * b.tu;
        c.mau = a.mau * b.mau;
        return c.rutgon();
    }
    friend phanso operator / (phanso a, phanso b) {
        phanso c;
        c.tu = a.tu * b.mau;
        c.mau = a.mau * b.tu;
        return c.rutgon();
    }
    friend istream& operator >> (istream& in, phanso& k) {
        in >> k.tu >> k.mau;
        return in;
    }
    friend ostream& operator << (ostream& out, phanso& k) {
        out << k.tu << "/" << k.mau;
        return out;
    }
};
int main() {
    phanso a, b;
    cin >> a >> b;
    phanso tong = a + b;
    cout << "Tong: " << tong << endl;
    phanso hieu = a - b;
    cout << "Hieu: " << hieu << endl;
    phanso tich = a * b;
    cout << "Tich: " << tich << endl;
    phanso thuong = a / b;
    cout << "Thuong: " << thuong << endl;
    return 0;
}