#include<iostream>
using namespace std;
int main() {
    int $a = 5; // Số lượng phần tử của mảng a
    int $b = 6; // Số lượng phần tử của mảng b
    int a[$a] = {1, 3, 6, 8, 10};
    int b[$b] = {2, 6, 7, 12, 14, 15};
    int c[$a + $b];
    int i = 0, j = 0, k = 0;
    while(i < $a && j < $b) { // Đồng thời i và j lần lượt ko đc vượt $a, $b
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    }
    while(i < $a) c[k++] = a[i++]; // Duyệt nốt các phần tử còn lại của mảng a
    while(j < $b) c[k++] = b[j++]; // Duyệt nốt các phần tử còn lại của mảng ab
    for(int x : c) {
        cout << x << " ";
    }
    return 0;
}