/*

* Note: phân tích (a[i] / div) % 10

Ví dụ: a[i] = 123

Khi div = 1:
+) 123 / 1 = 123
+) 123 % 10 = 3 (Xét hàng đơn vị)

Khi div = 10:
+) 123 / 10 = 12 (Ta xét đến hàng chục nên chia 10 để loại bỏ hàng đơn vị)
+) 12 % 10 = 2 (Xét đến hàng chục)

Khi div = 100:
+) 123 / 100 = 1 (Ta xét đến hàng trăm nên chia 100 để loại bỏ hai hàng trước)
+) 1 % 10 = 1 (Xét đến hàng trăm)

Kết luận:

*/


#include<bits/stdc++.h>
using namespace std;
int coutingSort(int *a, int n, int div) {
    vector<int> count(10, 0); // Xét các hàng của chữ số trong khoảng từ 0 - 9
    for(int i = 0; i < n; i++) count[(a[i] / div) % 10]++;
    for(int i = 1; i < 10; i++) count[i] += count[i - 1];
    vector<int> res(n);
    for(int i = n - 1; i >= 0; i--) {
        // res[count[(a[i] / div) % 10] - 1] = a[i];
        // count[(a[i] / div) % 10]--;
        // 2 dòng code trên có thể đc rút gọn thành:
        res[--count[(a[i] / div) % 10]] = a[i];
    }
    for(int i = 0; i < n; i++) a[i] = res[i];
}
int radixSort(int *a, int n) {
    int max = *max_element(a, a + n);
    for(int div = 1; max/div > 0; div *= 10) { // Xét dần từ hàng đơn vị ra ngoài
        coutingSort(a, n, div);
    }
}
int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    radixSort(a, n);
    for(int x : a) cout << x << endl;
    return 0;
}