/*

Quy hoạch Lomuto: Chọn phần tử cuối cùng làm mốc (pivot) để so sánh

VD: 2 8 7 1 3 5 6 4
Chọn 4 làm pivot -> chia ra làm 2 phần 2 1 3 và 8 7 5 6
Gọi i là stt của phần thứ 1, j là stt của phần thứ 2

 */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int partition(int a[], int left, int right) {
    int pivot = a[right]; // Chọn pivot là phần tử cuối
    int i = left - 1;
    for(int j = left; j < right; j++) { // Dồn phần tử bé hơn pivot về bên trái, lớn hơn về bên phải
        if(a[j] <= pivot) {
            swap(a[++i], a[j]);
        }
    }
    // Xếp pivot về đúng vị trí (sau phần tử bé hơn pivot, trước phần tử lớn hơn pivot)
    swap(a[++i], a[right]); // Ko swap với pivot mà phải swap với a[right] vì pivot chỉ là giá trị còn a[right] là địa chỉ
    return i; // Trả về vị trí hiện tải của pivot trong mảng
}
void quickSort(int a[], int left, int right) {
    if(left > right) return;
    int currIndex = partition(a, left, right); // Lấy vị trí hiện tại của pivot
    quickSort(a, left, currIndex - 1); // Sắp xếp từ đầu đến phần tử đằng trước pivot
    quickSort(a, currIndex + 1, right); // Sắp xếp từ phần tử đằng sau pivot đến cuối
}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19}; 
    quickSort(a, 0, n - 1);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}