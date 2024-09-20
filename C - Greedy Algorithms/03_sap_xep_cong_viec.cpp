/*

* Bài toán:
- Cho tập gồm n công việc, mỗi công việc đc biểu diễn bởi 
cặp thời gian bắt đầu Si và thời gian kết thúc Fi (i = 1, 2, 3, ..., n)
- Hãy lựa chọn nhiều nhất các công việc có thể thực hiện tuần tự 
bởi một máy hoặc một cá nhân mà ko xảy ra tranh chấp
- Mỗi công việc chỉ thực hiện đơn lẻ tại một thời điểm

* VD: 
Input: 
- Số lượng công việc: 6
- Thời gian bắt đầu Start[] = {1, 3, 0, 5, 8, 5}
- Thời gian kết thúc Finish[] = {2, 4, 6, 7, 9, 9}
Output: 
- OPT[] = {0, 1, 3, 4}


Sắp xếp công việc (N, S[], F[])

Input:
- N là số lượng công việc
- S[] thời gian bắt đầu
- F[] thời gian kết thúc
Ouput: Danh sách thực thi nhiều nhất
Actions: 
- Bước 1: Sắp xếp thứ tự tăng dần của thời gian kết thúc
- Bước 2 (Khởi tạo) Lựa chọn công việc đầu tiên 
làm phương án tối ưu (OPT = 1). N = N\{1}
- Bước 3 (Lặp) Với mỗi công việc j thuộc N
if(S[j] >= F[i]) { OPT = OPT U j; i = j; N = N\{i} }
- Bước 4 (Trả lại kết quả)

https://www.youtube.com/watch?v=bR5l8gQSoeI
*/