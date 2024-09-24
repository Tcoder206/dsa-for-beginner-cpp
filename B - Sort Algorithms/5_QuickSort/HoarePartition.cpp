/*
Pivot: Giá trị dùng để phân chia mảng

Thường sẽ chọn phần tử đầu tiên làm pivot
Sau khi chọn pivot thì sẽ chọn cặp nghịch thế (i, j) để sắp xép



* Cách thức hoạt động:
1. Khởi Tạo:
-Chọn pivot và đặt các chỉ số i và j vào các vị trí đầu và cuối của mảng con.
2. Di Chuyển i và j:
- Tăng i cho đến khi tìm phần tử lớn hơn hoặc bằng pivot.
- Giảm j cho đến khi tìm phần tử nhỏ hơn hoặc bằng pivot.
3. Hoán Đổi:
- Nếu i và j chưa gặp nhau (i < j), hoán đổi phần tử tại i với phần tử tại j.
- Nếu i và j đã vượt qua nhau, điều này cho thấy mảng đã được phân chia đúng cách và không cần hoán đổi thêm.

* VD: [10, 7, 8, 9, 1, 5] với pivot là 5:
1. Khởi Tạo:
- Pivot là 5, i bắt đầu từ 0 và j bắt đầu từ 5.
2. Di Chuyển i và j:
- i sẽ dừng lại khi gặp phần tử lớn hơn hoặc bằng 5 (sẽ dừng ở 7).
- j sẽ dừng lại khi gặp phần tử nhỏ hơn hoặc bằng 5 (sẽ dừng ở 1).
3. Hoán Đổi:
- i và j là 2 và 4 lúc này, và i < j.
- Hoán đổi 7 và 1, mảng trở thành [1, 7, 8, 9, 10, 5].
4. Kết Quả:
- Khi i và j vượt qua nhau, việc hoán đổi không còn cần thiết nữa.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int partition(int a[], int left, int right) {
    int pivot = a[left]; // Chọn pivot là phần tử đầu tiên
    int i = left - 1, j = right + 1;
    while(true) { // Vòng lặp sẽ luôn chạy nếu như bên trong chưa sắp xếp xong

        /*
        Note: 
        - Do...while sẽ đc thực hiện ít nhất 1 lần kể cả khi điều kiện là sai
        - While sẽ chỉ thực hiện khi điều kiện là đúng
        */

        do { ++i; } while(a[i] < pivot); // Tăng i cho đến khi phần từ nhỏ hơn pivot
        do { --j; } while(a[j] > pivot); // Giảm j cho đến khi phần tử lớn hơn pivot
        
        if(i < j) { // Kiểm tra nếu i và j nằm 2 phía khác nhau của pivot
            swap(a[i], a[j]);
        } else return j; // Khi i vượt qua j thì sẽ trả về j để dễ dàng xử lý mảng con nhỏ hơn
    }
}

void quickSort(int a[], int left, int right) {
    if(left >= right) return;
    int p = partition(a, left, right); // Lấy chỉ số phân chia (vị trí của pivot sau khi đã phân chia mảng)
    quickSort(a, left, p); // Sắp xếp mảng bên trái
    quickSort(a, p + 1, right); // Sắp xếp mảng bên phải
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