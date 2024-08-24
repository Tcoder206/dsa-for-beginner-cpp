/*

* Quy Hoạch Lomuto
- Chọn Pivot Cố Định: Thường chọn phần tử cuối cùng làm pivot.
- Phương Pháp Phân Chia:
+ Di chuyển các phần tử nhỏ hơn pivot về bên trái và các phần tử lớn hơn pivot về bên phải.
+ Sau khi hoàn thành, đặt pivot vào vị trí đúng của nó trong mảng.

* Quy Hoạch Hoare
- Chọn Pivot: Có thể chọn bất kỳ phần tử nào làm pivot (thường là phần tử đầu tiên hoặc giữa).
- Phương Pháp Phân Chia:
+ Sử dụng hai chỉ số để quét mảng từ hai đầu về phía nhau, hoán đổi các phần tử không đúng vị trí với pivot.
+ Chỉ số phân chia trả về vị trí của pivot sau khi nó đã được đặt đúng.

* Random Quick Sort
- Chọn Pivot Ngẫu Nhiên: Trong Random Quick Sort, pivot được chọn ngẫu nhiên từ mảng, không phụ thuộc vào vị trí cố định như đầu, giữa, hay cuối của mảng.
- Phương Pháp Phân Chia:
+ Có thể sử dụng quy hoạch Lomuto hoặc quy hoạch Hoare để phân chia mảng.
+ Quy hoạch Lomuto thường chọn phần tử cuối cùng làm pivot, và phân chia mảng bằng cách di chuyển các phần tử nhỏ hơn pivot về bên trái và phần tử lớn hơn về bên phải.
+ Quy hoạch Hoare sử dụng hai chỉ số để phân chia mảng sao cho phần tử nhỏ hơn pivot nằm bên trái và phần tử lớn hơn pivot nằm bên phải, nhưng chỉ số pivot có thể là bất kỳ phần tử nào, không cần là phần tử cuối cùng.

*/