/*
Bài toán bóc sỏi

Bạn sẽ tham gia một trò chơi. Nhiệm vụ của bạn sẽ chiến thắng máy.
Với mỗi trận đấu sẽ có n viện sỏi, bạn được bóc ra 1, 2, 3, ..., m viên sỏi.
Mỗi người bóc 1 lần rồi đến người kia. Đầu vào đưa bạn 2 số n, m.
Bạn được đi trước và kiểm tra xem bạn có luôn luôn chiến thắng được ko?


Hình dung: Nếu n = 10 và m = 5 thì làm sao để chúng ta chiến thắng?
Ko quá khó để tính ra, chúng ta sẽ bóc 4 viên. Số sỏi còn lại là 6.
Nếu người kia bóc 1, 2, 3, 4 hoặc 5 thì chúng ta sẽ bóc số sỏi còn lại và chiến thắng


Nếu n = 13 thì sao?
Chúng ta sẽ bóc 1 viên, số sỏi còn lại là 12.
Người kia bốc:      1   2   3   4   5
Chúng ta sẽ bốc:    5   4   3   2   1
Số sỏi còn lại luôn là 6


Vậy công thức ở đây là gì?
Nếu m là số sỏi có thể bóc tối đa, ta sẽ luôn bóc ra sao cho số sỏi còn lại chia hết cho m + 1

Vậy nếu số đá ban đầu đã chia hết cho m + 1? -> Chúng ta sẽ là người thua
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 10, m = 5;
    cout << (n % (m + 1) == 0 ? "Ko the win" : "Co the win");
    return 0;
}