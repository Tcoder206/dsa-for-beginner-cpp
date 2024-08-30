// #include<iostream>
// #include<vector>
// using namespace std;
// void countingSort(int *a, int n) {
//     int min = a[0];
//     int max = a[0];
//     for(int i = 0; i < n; i++) {
//         if(a[i] > max) max = a[i];
//         if(a[i] < min) min = a[i];
//     }

//     int range = max - min + 1;
//     vector<int> count(range, 0);
//     vector<int> res(n);

//     for(int i = 0; i < n; i++) {
//         count[a[i] - min]++; // a[i] phải lớn hơn bằng min vì index của count ko thể là số âm
//     }

//     for(int i = 1; i < range; i++) {
//         count[i] += count[i - 1]; // Thực hiện cộng dồn
//     }

//     for(int i = n - 1; i >= 0; i--) {
//     }
// }

// int main() {
//     int n = 5;
//     int a[n] = {10, 46, 27, 34, 19};
//     countingSort(a, n);
//     for(int x : a){
//         cout << x << endl;
//     }
//     return 0;
// }