/*

VD: [4, 2, 2, 8, 3, 3, 1]
min = 1, max = 8
range = 8 - 1 + 1 = 8 
-> result = [0, 0, 0, 0, 0, 0, 0, 0]
Đếm số lần xuất hiện: result = [1, 2, 2, 1, 0, 0, 1, 1]

*/

#include<iostream>
#include<vector>
using namespace std;
void countingSort(int *a, int n) {
    int max = a[0];
    int min = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    int range = max - min + 1;
    // vector<int> arr(kích_thước_của_vector, giá_trị_mặc_định_của_mỗi_phần_tử)
    vector<int> temp(range, 0); 

    for(int i = 0; i < n; i++) {
        temp[a[i] - min]++; // Chỉ số index của mảng sẽ phải bắt đầu từ min value
    }

    int index = 0;
    for(int i = 0; i < range; i++) {
    /*
        while(temp[i] > 0) { // Lặp khi bộ nhớ lưu trữ tạm thời temp có các phần tử đều lớn hơn 0
            a[index++] = i + min; // Đảm bảo giá trị ban đầu khi thêm vào mảng a nếu min khác 0
            temp[i]--; // Mỗi khi trừ xếp phần tử vào mảng a thì sẽ giảm phần tử trong temp (Lấy phần tử trong temp nhét vào mảng a) 
        }

        // Rút gọn như sau:
    */
        while(temp[i]-- > 0) a[index++] = i + min;
    }
}

int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    countingSort(a, n);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}
