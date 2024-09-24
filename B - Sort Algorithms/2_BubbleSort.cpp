// Sắp xếp các phần tử liền kề

/*
VD nếu n = 5 thì chỉ lặp 4 lần vì khi sắp xếp các phần tử liền kề, phần tử lớn nhất đã đc đẩy xuống cuối mảng
VD: int a[n] = {10, 46, 27, 34, 19};
Lần 1: Lặp 10 và 46 -> Ko thay đổi
Lần 2: Lặp 46 và 27 -> Đổi vị trí 27 và 46. Mảng lúc này là a[n] = {10, 27, 46, 34, 19};
Lần 3: Lặp 46 và 34 -> Đổi vị trí 34 và 46. Mảng lúc này là a[n] = {10, 27, 34, 46, 19};
Lần 4: Lặp 46 và 19 -> Đổi vị trí 19 và 46. Mảng lúc này là a[n] = {10, 27, 34, 19, 46};
Thế nên ko cần lặp đến mảng thứ 5 sẽ khiến chương trình chạy lâu
Vậy nếu sắp xếp 1 mảng có n phần tử thì cần lặp n - 1 lần
*/

#include<iostream>
using namespace std;
int bubbleSort(int *a, int n) {
    for(int i = 0; i < n - 1; i++){
        bool isSwapped = false; // Mỗi lần tăng i thì sẽ đặt là false
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){ // (*)
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSwapped = true; // Nếu lọt vào đkiện (*) thì sẽ đổi là true
            }
        }
        if(!isSwapped) break; // Nếu đã đc sắp xếp xong (ko lọt vào đkien (*) nên vẫn là false thì sẽ thoát ctrinh)
    }
}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    bubbleSort(a, n);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}