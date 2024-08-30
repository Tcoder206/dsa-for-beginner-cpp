/*
VD: 6 5 12 10 9 1
+-----+--------+--------+--------+
| Lần |  Left  |  Mid   | Right  |
+-----+--------+--------+--------+
|   1 | 6 (0)  | 12 (2) | 1 (5)  |
|   2 | 6 (0)  | 5 (1)  | 12 (2) |
|   3 | 6 (0)  | 6 (0)  | 5 (1)  |
|   4 | 6 (0)  |        | 6 (0)  |
|   5 | 5 (1)  |        | 5 (1)  |
|   6 | 12 (2) |        | 12 (2) |
|   7 | 10 (3) | 9 (4)  | 1 (5)  |
|   8 | 10 (3) | 10 (3) | 9 (4)  |
|   9 | 10 (3) |        | 10 (3) |
|  10 | 9 (4)  |        | 9 (4)  |
|  11 | 1 (5)  |        | 1 (5)  |
+-----+--------+--------+--------+

Tạo bảng ascii: https://ozh.github.io/ascii-tables/

*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void merge(int *a, int left, int mid, int right) {
    vector<int> x(a + left, a + mid + 1); // a + left ở đây là con trỏ trở tới a[left] trong mảng a
    vector<int> y(a + mid + 1, a + right + 1); // Nếu ko cộng 1 thì con trỏ sẽ trỏ vào phần tử sau phần tử cuối
    int i = 0, j = 0;
    while(i < x.size() && j < y.size()) { // Kiểm tra nếu cả i và j lần lượt bé hơn size của x và y
        a[left++] = (x[i] <= y[j]) ? x[i++] : y[j++]; // Nếu x[i] <= y[j] thì gán lần lượt x[i] vào x[left]
    }
    while(i < x.size()) a[left++] = x[i++]; // Check xem còn phần tử nào ở x chưa sắp xếp thì sắp xếp tương tự như trên
    while(j < y.size()) a[left++] = y[j++]; // Cũng, tương tự, check xem còn sót phần tử nào ở y chưa đc sắp xếp

}
void mergeSort(int *a, int left, int right) {
    if(left >= right) return;
    int mid = (left + right)/2;
    mergeSort(a, left, mid); // Thực hiện tách thành 6 và 5 12
    mergeSort(a, mid + 1, right); // Thực hiện tách thành 10 và 9 1
    merge(a, left, mid, right);
}
int main() {
    int n = 6;
    // int a[n] = {6, 5, 12, 10, 9, 1};
    int a[n] = {10, 46, 27, 34, 19};
    mergeSort(a, 0, n - 1);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}