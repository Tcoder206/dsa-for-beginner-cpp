/*
Sliding Max Window
28tech: https://www.youtube.com/watch?v=MoD_cqJ9s6g&ab_channel=28tech

Input: 
9 3
7 3 1 2 8 6 4 1 0
Output:
7 3 8 8 8 6 4

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k; int a[n];
    for(int &x : a) cin >> x;
    deque<int> temp;
    for(int i = 0; i < k; i++) { // Mỗi lần duyệt thì duyệt k số đầu tiên
        while(!temp.empty() && a[i] > a[temp.back()]) {
            temp.pop_back(); // Nếu phần tử hiện tại lớn hơn phần tử ở cuối
        }
        temp.push_back(i);
    }
    /*
    VD: Push 7 vào temp (index 0), push 3 vào temp (index 1), push 1 vào temp (index 2)
    Do phần tử đc push vào đầu tiên là phần tử lớn nhất nên ta sẽ dùng front để lấy nó
    */
    cout << a[temp.front()] << " ";
    /*
    Note: i sẽ là vị trí cuối cùng của bộ 3 tiếp theo
    VD: 7 3 1 2 8 6 4 1 0 
    Khi i = 3 (Vị trí của số 2) thì bộ 3 sẽ là 3 1 2
    Khi i = 4 (Vị trí của số 8) thì bộ 3 sẽ là 1 2 8
    ...
    */
    for(int i = k; i < n; i++) { // Kiểm tra bộ 3 tiếp theo
        /*
        k là độ dài, i là vị trí cuối cùng của bộ 3 tiếp theo
        Gọi phần tử đầu tiên là x -> i - x + 1 = k -> i - (x - 1) = k 
        -> x = i - k + 1 -> Phần tử đầu tiên = i - k + 1
        Giải thích code trên: Nếu phần tử nhỏ hơn i - k + 1 (Ko nằm trong bộ 3) thì sẽ loại ra
        */
        if(temp.front() < i - k + 1) temp.pop_front(); // Ktra số đó còn tồn tại trong bộ 3 ko
        // Toàn bộ code dưới vẫn là thao tác check max sliding như trong vòng for dòng 19
        while(!temp.empty() && a[i] > a[temp.back()]) temp.pop_back();
        temp.push_back(i);
        cout << a[temp.front()] << " ";
    }
    return 0;
}