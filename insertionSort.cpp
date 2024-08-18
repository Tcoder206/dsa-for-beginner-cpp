/*
1. Lấy một phần tử 
2. So sánh với từng phần tử trong list 
3. Chèn vào vị trí thích hợp 
*/


/* 
a[1] = 46, a[2] = 27
selected = a[2]
a[j] = a[1]
so sánh với các phần tử phía sau: a[1] -> a[0]
khi tìm đc vị trí phù hợp thì chèn selected vào
*/

/*
29 8 13 48 28
- Chọn 8 so sánh vs 29: Chèn 8 lên trước 29 (8 29 13 48 28)
- Chọn 13 so sánh vs 29: Chèn 13 lên trước 29 (8 13 29 48 28)
- Chọn 48 so sánh vs các số trước: Giữ nguyên
- Chọn 28 
+ so sánh vs 48: Ko TM
+ so sánh vs 29: ko TM
+ so sánh vs 13: TM -> Chèn sau 13, trước 29 (8 13 29 28 48)
*/


#include<iostream>
using namespace std;
int insertionSort(int *a, int n){
    for(int i = 1; i < n; i ++) { // Phần tử đầu tiên đã tự sắp xếp nên sẽ chọn sang phần tử thứ 2 luôn
        int selected = a[i]; // Số liền sau
        int j = i - 1; // Số liền trước
        while(j >= 0 && a[j] > selected) { // Di chuyển các phẩn tử lên 1 vị trí để so sánh
            a[j + 1] = a[j]; // Đẩy các phần tử phía sau lên 1 index
            j--; // Lùi dần index để so sánh
        }
        a[j + 1] = selected; // Kết thúc vòng lặp thì chèn số liền sau vào vị trí thích hợp
    }
}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    insertionSort(a, n);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}