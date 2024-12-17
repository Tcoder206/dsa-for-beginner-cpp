### 1. Shortest Part in DAG
* Sử dụng sắp xếp topo để tìm đường đi ngắn nhất từ một đỉnh nguồn đến tất cả các đỉnh khác trong một đồ thị có hướng không chu trình
### 2. Thuật toán Floyd-Warshall
* Sử dụng để tìm đường đi ngắn nhất giữa các cặp đỉnh trong 1 đồ thị có hướng hoặc vô hướng với **trọng số dương hoặc âm**, nhưng **không có chu trình âm.**
### 3. Thuật toán Dijkstra
* Sử dụng để tìm đường đi ngắn nhất từ một đỉnh nguồn đến tất cả các đỉnh khác trong một đồ thị có trọng số dương.
### 4. Thuật toán Bellman-Ford
* Sử dụng để tìm đường đi ngắn nhất từ một đỉnh nguồn đến tất cả các đỉnh khác trong một đồ thị **có hướng hoặc vô hướng** với **trọng số dương hoặc âm**. Nó cũng có thể **phát hiện chu trình âm**.
### 5. Thuật toán tìm đường đi ngắn nhất nhanh (SPFA)
* Là phiên bản cải tiến của Bellman-Ford
* Sử dụng hàng đợi để tối ưu hóa quá trình cập nhật các đường đi ngắn nhất