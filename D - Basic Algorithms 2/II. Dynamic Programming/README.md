## Các bài toán kinh điển về quy hoạch động (Dynamic Programming):
1. LIS
2. LCS
3. Fibonacci
4. Xúc sắc

## Tóm tắt 4 bước để giải 1 bài Dynamic Programming (Quy hoạch động):

#### 1. Giải theo hướng đệ quy:
Đây sẽ là cách dễ nhất để bắt đầu một bài DP. Ở bước này thì bạn không cần quan tâm đến độ phức tạp. Chỉ cần trả đúng giá trị là okay rồi. Thường thì độ phức tạp của bước 1 sẽ là khoảng O(2^N) hoặc O(N!)
    
#### 2. Top-down DP: 
Vì khi sử dụng đệ quy, sẽ có nhiều hàm bị gọi đi gọi lại nhiều lần, chúng ta có thể cải thiện bằng cách sử dụng thêm bộ nhớ để lữu giữ giá trị trả về của các hàm đã tính. Như thế, ở những lần gọi tiếp theo, chúng ta sẽ sử dụng giá trị trong bộ nhớ thay vì tính lại từ đầu mất thời gian. Đa số mọi người sẽ dừng ở bước này. Do là độ phức tạp thời gian đã tối ưu rồi. Các bước sau mục đích là chỉ để cải thiện độ phức tạp không gian thôi.
    
#### 3. Bottom-up DP: 
Thay vì dùng đệ quy, chúng ta sử dụng mảng để chứa các giá trị và thực hiện tính toán ngay trên mảng đó. Bước 2 và 3 sẽ có chung độ phức tạp. Tuy nhiên, đây là một bước vô cùng quan trọng để có thể tiến tới bước 4 một cách dễ dàng hơn. 

#### 4. Cải thiện độ phức tạp không gian:
Dựa vào cái mảng từ bước 3, chúng ta có thể phát hiện được những giá trị mà chỉ được sử dụng cho 1-2 lần tính toán. Đối với những giá trị này, chúng ta không cần đến mảng để chứa nó làm gì. Thay vì thế, bạn hoàn toàn có thể sử dụng ít biến hơn cho việc tính toán, và chúng ta chỉ cần ghi đè lên các biến này khi nó không cần thiết nữa.