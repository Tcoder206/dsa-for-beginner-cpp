/*

https://www.youtube.com/watch?v=AzjXxYIYOmw&list=PL8JRkLx_73-IazK0iOn2iSILrpSEUzNbt

Input           Output
11 25           36 37
1430 4862       6282 6292
16796 58786     74580 85582

*/


#include<iostream>
using namespace std;
int main() {
    string a, b; cin >> a >> b;
    string old_a = a, old_b = b, new_a = a, new_b = b;
    // Đổi 5 thành 6 và ngược lại
    for(char &c : new_a) if(c == '5') c = '6';
    for(char &c : new_b) if(c == '5') c = '6';
    for(char &c : old_a) if(c == '6') c = '5';
    for(char &c : old_b) if(c == '6') c = '5';
    int min_sum = stoi(old_a) + stoi(old_b);
    int max_sum = stoi(new_a) + stoi(new_b);
    cout << min_sum << " " << max_sum << "\n";
    return 0;
}