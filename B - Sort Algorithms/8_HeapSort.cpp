#include<bits/stdc++.h>
using namespace std;
void heapify(int *a, int n, int i) { // Xét cây nhị phân từ dưới lên trên 
    int largest = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    if(left < n && a[left] > a[largest]) { // Nếu node trái lớn hơn gtri lớn nhất và ko đc vượt quá size của a
        largest = left; // Giá trị lớn nhất trở thành node con bên trái
    }
    if(right < n && a[right] > a[largest]) {
        largest = right;
    }
    if(largest != i) { // So sánh giá trị lớn nhất với node cha
        swap(a[largest], a[i]); // Đổi chỗ nếu a[i] chưa phải giá trị lớn nhất
        heapify(a, n, i); // Tiếp tục đệ quy để sắp xếp theo dạng max heap
    }
}
void heapSort(int *a, int n) {
    for(int i = n/2 - 1; i >= 0; i--) { // Xét từ node cha cuối cùng: n/2 - 1
        heapify(a, n, i);
    }
    for(int i = n - 1; i >= 0; i--) {
        swap(a[i], a[0]); // Đổi chỗ cho node cha đầu tiên
        heapify(a, i, 0); // Node con cuối cùng đc loại bỏ nên mảng chỉ còn i phần tử (tức n - 1 phần tử)
    }
}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    heapSort(a, n);
    for(int x : a){
        cout << x << endl;
    }
    return 0;
}