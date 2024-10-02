#include<bits/stdc++.h>
#include<queue>
using namespace std;
vector<string> res;
int binarySize = 100000; // Số nhị phân tối đa cần tạo
void binary() {
    queue<string> temp;
    temp.push("1");
    res.push_back("1");
    while(res.size() < binarySize) { // Chạy cho đến khi đủ 100k số nhị phân trong res
        string top = temp.front(); // Lấy phần tử đầu tiên khỏi hàng đợi để xử lý
        temp.pop(); // Sau đó xóa phần tử đầu tiên khỏi hàng đợi
        temp.push(top + "0"); // Phần tử đầu tiên đc lấy ra sẽ thêm "0" và "1" rồi push tạm thời vào hàng đợi
        temp.push(top + "1");
        res.push_back(top + "0");
        res.push_back(top + "1");
    }
}
int main() {
    binary(); // Gọi hàm binary để đếm sẵn 100k số nhị phân
    int t; cin >> t; // Nhập số lượng test case
    while(t--) { // Nếu t đúng thì giảm dần giá trị t
        int n; cin >> n;
        for(int i = 0; i < n; i++) cout << res[i] << " "; // In lần lượt số nhị phân với size là n
        cout << endl; // Xuống dòng sau mỗi test case
    }
    return 0;
}