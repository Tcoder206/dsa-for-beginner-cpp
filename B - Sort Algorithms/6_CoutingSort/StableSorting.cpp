#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void countingSort(int *a, int n) {
    int max_value = *max_element(a, a + n);
    vector<int> count(max_value + 1, 0); // Số lượng count = cuối - đầu + 1 = max_value - 0 + 1
    for(int i = 0; i < n; i++) {
        count[a[i]]++; // Tăng count lên 1 đơn vị tại a[i]
    }
    for(int i = 1; i < max_value + 1; i++) {
        count[i] += count[i - 1]; // Số liền sau bằng tổng cộng dồn của số liền trước và sau
    }
    vector<int> res(n);
    for(int j = n - 1; j >= 0; j--) {
        res[count[a[j]] - 1] = a[j]; // Vị trí của res là số thứ tự của a[j] trong count
        count[a[j]]--; // Sau đi đưa vào res thì số lượng count tại vị trí a[j] bị giảm đi 1 đơn vị
    }
    for(int i = 0; i < n; i++) {
        a[i] = res[i]; // Ghi đề mảng res[] đã sắp xếp vào mảng a[] ban đầu
    }
}

int main() {
    int n = 5;
    int a[n] = {10, 46, 27, 34, 19};
    countingSort(a, n);
    for(int x : a){
        cout << x << " ";
    }
    return 0;
}