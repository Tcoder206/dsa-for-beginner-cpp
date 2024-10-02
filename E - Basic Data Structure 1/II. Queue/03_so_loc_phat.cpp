/*

Input:
2
2
3
Output:
88 86 68 66 8 6
888 886 868 866 688 686 668 666 88 86 68 66 8 6

*/

#include<bits/stdc++.h>
using namespace std;
vector<string> res;
const int condition = 15; // Đk là 1 <= N <= 15
void fortuneNumber() {
    queue<string> temp;
    temp.push("6");
    temp.push("8");
    res.push_back("6");
    res.push_back("8");
    while(true) {
        string top = temp.front();
        temp.pop();
        if(top.length() == condition) break;
        temp.push(top + "6");
        temp.push(top + "8");
        res.push_back(top + "6");
        res.push_back(top + "8");
    }
}
int main() {
    fortuneNumber();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<string> output;
        for(string x : res) {
            if(x.length() > n) break;
            output.push_back(x);
        }
        reverse(output.begin(), output.end());
        for(string x : output) cout << x << " ";
        cout << endl;
    }
    return 0;
}