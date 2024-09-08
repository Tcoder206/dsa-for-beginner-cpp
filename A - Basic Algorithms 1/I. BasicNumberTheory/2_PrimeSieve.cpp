/*

Nháp: (check 1 số n bất kỳ xem có phải số nguyên tố)

Nếu n là hợp số: n = a * b (a hoặc b hoặc cả 2 số phải nhỏ hơn n)
Giả sử: a <= b
<->     a * a <= a * b (Nhân 2 vế vs a)
<->     a * a <= n

Tại sao lại nhân 2 vế vs a mà ko phải là b? 
Giả sử: a <= b
<->     b * a <= b * b (Nhân 2 vế vs b)
<->     n <= b * b (Mâu thuẫn do b * b chỉ có thể bằng n chứ ko thể lớn hơn n)

*/

// https://wiki.vnoi.info/vi/algo/math/divisors

#include<bits/stdc++.h>
using namespace std;

// // Check xem có phải số nguyên tố ko?
// int isPrime(int n) {
//     if(n < 2) return false; // 0 và 1 ko phải là 1 số nguyên tố
//     for(int i = 2; i * i <= n; i++) { // Check số nguyên tố bắt đầu từ số 2
//         if(n % i == 0) return false; // Nếu chia hết cho số i khác ngoài 1 và n thì ko phải số nguyên tố
//     }
//     return true;
// }

// In nguyên tố bằng sàng Eratosthenes
void sieve(int n) { // n là con số giới hạn sẽ dừng lại khi sàng số nguyên tố
    int prime[n + 1]; // Tạo một mảng lưu trữ các số nguyên tố
    for(int i = 0; i <= n; i++) { // Nhỏ hơn bằng n do prime có số lượng là n + 1
        prime[i] = 1; // i sẽ là số nguyên tố nếu giá trị là 1, nếu ko phải thì là 0
    }
    prime[0] = prime[1] = 0; // 0 và 1 ko phải số nguyên tố nên loại
    for(int i = 2; i <= n; i++) { // Đã loại số 0 và 1 nên xét từ số 2
        if(prime[i]) { // Check nếu như nó là số nguyên tố
            for(int j = i * i; j <= n; j += i) { // Lọc những số chia hết cho i nên bước nhảy phải cộng thêm i
            // Bắt đầu từ i * i vì các số nhỏ hơn i * i đã được đánh dấu trước là số nguyên tố
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++) { // Lặp từ 2 đến n để tìm và trả về số nguyên tố
        if(prime[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    // cout << isPrime(n) << endl;
    sieve(n);
    return 0;
}