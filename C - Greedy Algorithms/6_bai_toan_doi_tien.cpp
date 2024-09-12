/*

https://www.youtube.com/watch?v=1D-BC82FdZM

Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000,
số lượng tờ tiền mỗi mệnh giá là ko hạn chế.
Mỗi người cần đổi số tiền có giá trị bằng N.
Hãy xác định xem số tờ tiền ít nhất sau khi đổi là bao nhiêu?

Input: 
Dòng đầu tiên là số lượng toàn bộ test T (T <= 50).
Mỗi test gồm 1 số nguyên N (1 <= N <= 100000)

Output: Với mỗi test, in ra đáp án trên 1 dòng

Test ví dụ: 

Input   Output
2       2
70      3
121

*/

#include<iostream>
using namespace std;
int main() {
    int n = 2; // Số lượng test case
    int input[n] = {70, 121}; // Tiền cần đổi

    for(int i = 0; i < n; i++) {

        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int count = 0;
        for(int j = 9; j >= 0; j--){ // Duyệt ngược từ số lớn nhất đến số nhỏ nhất
            count += input[i]/a[j]; // Đếm số tờ tiền cần đổi từ input[n]
            input[i] %= a[j]; // Từ đi số tiền đã đổi từ input[n] xem còn dư bao nhiêu
        }
        cout << count << " ";

    }
    return 0;
}