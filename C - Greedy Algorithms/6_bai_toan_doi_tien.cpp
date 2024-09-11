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
Code đang bị lỗi
#include<iostream>
using namespace std;
int main() {
    int n = 2;
    int input[n] = {70, 121};
    for(int i = 0; i < n; i++) {

        int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int count = 0;
        for(int j = 9; j >= 0; j--){
            count += input[n]/a[j];
            input[n] %= a[j];
        }
        cout << count << " ";

    }
    return 0;
}