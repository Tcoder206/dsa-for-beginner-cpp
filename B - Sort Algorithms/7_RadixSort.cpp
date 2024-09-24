#include<iostream>
using namespace std;
int radixSort(int *a, int n) {

}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    radixSort(a, n);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}