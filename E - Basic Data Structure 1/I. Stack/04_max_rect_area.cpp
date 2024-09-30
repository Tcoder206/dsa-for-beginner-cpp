/*

7
6 2 5 4 5 1 6
12

6
2 1 5 6 2 3
10

4
2 3 4 2
8

Note: Diện tích cần tính nằm trong đoạn [top + 1, i - 1]
Độ dài = Cuối - đầu + 1 = (i - 1) - (top + 1) + 1 = i - 1 - top - 1 + 1 = i - 1 - top

*/

#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    stack<int> temp;
    int area = 0, i = 0;
    while(i < n) {
        if(temp.empty() || a[i] >= a[temp.top()]) {
            temp.push(i++); // Đẩy index vào sau khi stack rỗng hoặc ptu trước lớn hơn bằng ptu sau
        } else {
            int ind = temp.top(); // Lấy phần tử cuối cùng đc đẩy vào stack
            temp.pop(); // Xóa phần tử cuối cùng trong stack (Sau khi đã lưu trong biến ind)
            if(temp.empty()) { // Nếu stack vừa rỗng và vừa có ptu trước nhỏ hơn ptu sau
                area = max(area, a[ind] * i); // Tính cho TH giảm dần (VD: 6 5 4 3 ...)
            } else {
                area = max(area, a[ind] * (i - 1 - temp.top())); // Tính cho TH tăng dần (VD: 2 3 4 ...)
            }
        }
    }
    while(!temp.empty()) { // Tính nốt diện tích còn lại trong stack
        int ind = temp.top();
        temp.pop();
        if(temp.empty()) { // Có thể sau khi pop ptu thì stack sẽ rỗng nên ta xét cả TH này
            area = max(area, a[ind] * i); // Diện tích là chiều cao cột hiện tại nhân chiều rộng từ đầu mảng đến i
        } else {
            area = max(area, a[ind] * (i - 1 - temp.top()));
        }
    }
    cout << area << endl;
    return 0;
}