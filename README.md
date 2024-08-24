Để tạm ở đây code cho tiện
```cpp
#include<iostream>
using namespace std;
int ten_thuat_toan(int *a, int n) {
    ...
}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    ten_thuat_toan(a, n);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}
```

### Sorting Algorithms
Hướng tới ICPC:
- [] Couting Sort
- [] Radix Sort
- [] Bucket Sort
- [] Intro Sort
- [] Tim Sort
Phổ biến và đc ưa chuộng:
- [] Merge Sort
- [] Quick Sort
- [] Heap Sort