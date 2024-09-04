/*
Bài toán mua sách

Trong nhà sách đang bán một bộ sách gồm n cuốn sách, mỗi cuốn sách có giá là a[i].
Nhà sách đang có ưu đãi là mua 3 cuốn thì miễn phí cho quyển sách rẻ nhất trong 3 cuốn đấy.
Tìm chi phí thấp nhất để mua hết n cuốn sách.

VD:
7
5 3 6 9 1 2 2
Đáp án: 21


1 2 2 3 5 6 9
0 3 6

*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *a, int n) { // Sắp xếp từ bé đến lớn trước
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

void mua_sach(int *a, int n) { // Xử lý bài toán mua sách
    selectionSort(a, n);
    int giaTien = 0;
    for(int i = n - 1; i >= 0; i--) { // Duyệt từ cuối lên đầu để đảm bảo check sách đắt tiền trước
        if((n - i) % 3 == 0) continue; // Cứ cuốn ít tiền nhất trong 3 cuốn thì đc miễn phí
        giaTien += a[i]; // Cộng giá những cuốn sách ko đc miễn phí
    }
    cout << giaTien;
}

int main() {
    int n = 7;
    int a[n] = {5, 3, 6, 9, 1, 2, 2};
    mua_sach(a, n);
    return 0;
}
