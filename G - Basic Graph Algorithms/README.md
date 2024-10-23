## Lý thuyết & biểu diễn đồ thị
- Từ danh sách cạnh biểu diễn sang ma trận kề
- Từ danh sách cạnh biểu diễn sang danh sách kề
- Từ ma trận kề biểu diễn sang danh sách cạnh
- Từ ma trận kề biểu diễn sang danh sách kề
- Từ danh sách kề biểu diễn sang ma trận kề
- Từ danh sách kề biểu diễn sang danh sách cạnh

## 1. Breadth-First Search (BFS)
#### Định nghĩa
* Là thuật toán duyệt đồ thị bắt đầu từ một đỉnh gốc và duyệt qua các đỉnh kề theo từng lớp (level) từ gần đến xa.
#### Ứng dụng
* Duyệt đồ thị
* Tìm đường ngắn nhất trên đồ thị
* Xác định các thành phần liên thông trong đồ thị

## 2. BFS 0-1
#### Định nghĩa
* Là phiên bản của BFS được sử dụng cho đồ thị có cạnh trọng số 0 hoặc 1
* Sử dụng deque để đẩy đỉnh với trọng số 0 vào đầu và đỉnh với trọng số 1 vào cuối, từ đó tối ưu hóa việc duyệt các cạnh trọng số 0 và 1.

## 3. DFS Tree
#### Ứng dụng
* Phân tích cấu trúc của đồ thị, tìm cầu (bridge) và điểm khớp (articulation point).
* Giải quyết các bài toán về thành phần liên thông và vòng trong đồ thị.

## 4. Sắp xếp topo (Topological Sort)
#### Định nghĩa
* Là quá trình sắp xếp các đỉnh của đồ thị có hướng mà không có chu trình (DAG) sao cho đối với mọi cạnh u→v, đỉnh u đứng trước đỉnh v.
#### Ứng dụng
* Lập kế hoạch công việc: Xác định thứ tự thực hiện công việc có phụ thuộc lẫn nhau.
* Phân tích phụ thuộc: Trong ngôn ngữ lập trình và biên dịch.

## 5. Khớp và Cầu (Articulation Points and Bridges)
#### Ứng dụng
* Xác định các điểm hoặc cạnh quan trọng trong mạng
* Phân tích tính bền vững của mạng.

## 6. Chu trình (Cycle)
#### Các thuật toán
**6.1.** Tarjan's Algorithm
**6.2.** Johnson's Algorithm
**6.3.** Cycle Detection Algorithms

## 7. Thành Phần Liên Thông Mạnh (Strongly Connected Components - SCC)
#### Các thuật toán
**7.1.** Kosaraju's Algorithm
* Sử dụng hai lần duyệt đồ thị, một lần trên đồ thị gốc và một lần trên đồ thị chuyển vị.
**7.2.** Tarjan's Algorithm
* Dựa trên DFS và sử dụng chỉ số thấp để xác định các SCC.
#### Ứng dụng
* Phân tích đồ thị: Xác định các thành phần liên thông mạnh trong đồ thị.
* Lập kế hoạch: Tìm các nhóm công việc có mối quan hệ chặt chẽ.

## 8. Thành phần song liên thông (Biconnected component)

## 9. Euler Tour Technique (ETT)
#### Ứng dụng
* Xử lý cây hiệu quả: Áp dụng trong các bài toán liên quan đến cây, như LCA (Lowest Common Ancestor) của nhiều đỉnh.
* Phân tích đồ thị: Tạo chuỗi Euler cho các ứng dụng khác nhau.

## 10. Chu trình Euler (Euler circuit)
#### Các thuật toán
**10.1.** Fleury’s Algorithm
* Tìm Euler circuit bằng cách xóa dần các cạnh và đảm bảo không phá vỡ tính liên thông của đồ thị.
**10.2.** Hierholzer’s Algorithm
* Bắt đầu từ một đỉnh bất kỳ, xây dựng từng đoạn của chu trình và kết hợp chúng lại để tìm ra Euler circuit hoặc path hoàn chỉnh.