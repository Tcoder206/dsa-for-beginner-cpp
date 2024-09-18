## 1. Stack (Ngăn xếp)
#### Thao tác:
* Push: Thêm 1 phần tử vào đỉnh ngăn xếp
* Pop: Loại bỏ và trả 1 phần tử ở đỉnh ngăn xếp
* Peek/Top: Trả 1 phần tử ở đỉnh ngăn xếp mà ko loại bỏ nó
* IsEmpty: Kiểm tra xem có rỗng hay ko

## 2. Queue (Hàng đợi)
#### Thao tác:
* Enqueue: Thêm 1 phần tử vào cuối hàng đợi
* Dequeue: Loại bỏ và trả phần tử đầu hàng đợi
* Front/Peek: Trả phần tử đầu hàng đợi mà ko loại bỏ nó
* IsEmpty: Kiểm tra xem có rỗng hay ko

## 3. Prefix Sum Array (Mảng cộng dồn)
Ngoài ra, còn Difference Array (Mảng hiệu)

## 4. Deque (Double-Ended Queue: Hàng đợi 2 đầu)
#### Thao tác:
* Thêm vào đầu: push_front()
* Thêm vào cuối: push_back()
* Xóa từ đầu: pop_front()
* Xóa từ cuối: pop_back()
* Truy cập phần tử đầu: front()
* Truy cập phần tử cuối: back()
#### Ứng dụng: Sliding Window (Cửa sổ trượt)

## 5. Monotonic Stack (Ngăn xếp tăng hoặc giảm dần)
#### Ứng dụng:
* Tìm phần tử gần nhất: Tìm phần tử lớn nhất/nhỏ nhất gần vị trí i nhất trong dãy số thỏa mãn điều kiện nào.
* Xử lý biểu đồ: Các bài toán liên quan đến biểu đồ chiều cao như tìm diện tích hình chữ nhật lớn nhất trong histogram.
* Tìm giá trị cực đại hoặc cực tiểu trong một các đoạn [li; ri] của dãy số ban đầu (với điều kiện dãy li và dãy ri tăng dần)

## 6. Sparse Table (Bảng thưa)
#### Ứng dụng
Thường được sử dụng trong các bài toán yêu cầu xử lý nhiều truy vấn dãy con trên mảng tĩnh (không có truy vấn cập nhật)
* Tìm giá trị min, max hoặc tính tổng các phần tử trong một đoạn con.
* Các bài toán liên quan đến xử lý chuỗi hoặc mảng.
* Có thể kết hợp với chặt nhị phân để tìm một đoạn con thỏa mãn điều kiện về min, max hay tổng.

## 7. Priority Queue (Hàng đợi ưu tiên)
#### Thao tác:
* Chèn phần tử: Thêm phần tử mới vào cuối heap và điều chỉnh để duy trì tính chất heap (heapify) trong thời gian O(log n).
* Xóa phần tử: Xóa phần tử gốc (phần tử nhỏ nhất trong min-heap hoặc lớn nhất trong max-heap) và điều chỉnh lại heap trong thời gian O(log n).
* Truy cập phần tử gốc: Lấy phần tử nhỏ nhất (min-heap) hoặc lớn nhất (max-heap) mà không cần xóa nó trong thời gian O(1).
#### Ứng dụng:
* Thuật toán Dijkstra: Tìm đường đi ngắn nhất trong đồ thị.
* Quản lý hệ thống ưu tiên: xử lý các tác vụ dựa trên mức độ quan trọng.