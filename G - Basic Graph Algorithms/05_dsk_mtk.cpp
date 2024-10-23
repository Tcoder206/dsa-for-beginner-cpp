/*
Input:
5
2 3 4
1 3 4 5
1 2 4 5
1 2 3 5
2 3 4
Output:
0 1 1 1 0
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; // Sau khi input và enter thì nó sẽ lưu ký tự "\n"
    cin.ignore(); // Bỏ qua và ko lưu ký tự "\n" mỗi lúc nhấn enter sau khi input
    int a[n + 1][n + 1] = {0};
    for(int i = 1; i <= n; i++) { 
        string s, num;
        getline(cin, s); // Nó sẽ lấy toàn bộ ký tự trong bộ nhớ trước đó
        // Nếu ko có cin.ignore() thì khi getline nó sẽ coi ký tự "\n" là 1 dòng rỗng
        stringstream ss(s);
        while(ss >> num) a[i][stoi(num)] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}