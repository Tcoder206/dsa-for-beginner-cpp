#include<bits/stdc++.h>
using namespace std;
void selectionSort(int *a, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

void bubbleSort(int *a, int n) {
    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
            swapped = true;
        }
        if(!swapped) break;
    }
}

void insertionSort(int *a, int n) {
    for(int i = 1; i < n; i++) {
        int selected = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > selected) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

void merge(int *a, int l, int m, int r) {
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while(i < x.size() && j < y.size()) {
        a[l++] = x[i] <= y[j] ? x[i++] : y[j++];
    }
    while(i < x.size()) a[l++] = x[i++];
    while(j < y.size()) a[l++] = y[j++];
}
void mergeSort(int *a, int l, int r){
    int m = (l + r)/2;
    if(l >= r) return;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    mergeSort(a.data(), 0, n);
    for(int x : a){
        cout << x << " ";
    }
    return 0;
}