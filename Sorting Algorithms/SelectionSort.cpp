// Sắp xếp các phần tử từ dựa vào min value

// 

#include<iostream>
using namespace std;
int selectionSort(int *a, int n) {
    for(int i = 0; i< n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    selectionSort(a, n);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}