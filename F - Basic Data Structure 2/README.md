## 1. Resizing Array (Vector): Mảng thay đổi kích thước
* [Link video youtube tham khảo (28tech)](https://www.youtube.com/watch?v=053Tcz4omzk)
```cpp
std::vector<int> vec1(size_of_array, default_values); // Khai báo thông thường

int arr[4] = {2, 4, 6, 8}
std::vector<int> vec2(arr, arr + 4); // 
/*
arr + 0: Phần tử đầu tiên (2).
arr + 1: Phần tử thứ hai (4).
arr + 2: Phần tử thứ ba (6).
arr + 3: Phần tử thứ tư (8).
arr + 4: Vị trí ngay sau phần tử cuối cùng (ngoài vùng của mảng).
*/

std::vector<int> vec3(vec2); // Khai báo bằng cách copy từ vec2

std::vector<int> vec4(std::move(vec2)); // Khai báo bằng cách chuyển toàn bộ dữ liệu từ vec2 vào
```

## 2. Linked List (Danh sách liên kết)

## 3. Hash Table (Bảng băm)
#### Định nghĩa
Cấu trúc dữ liệu ánh xạ khóa-giá trị, sử dụng hàm băm để phân phối khóa vào các vị trí (buckets).
#### Unordered Set
* Ứng dụng: Lưu trữ và kiểm tra tính duy nhất của phần tử nhanh chóng.
#### Unordered Multiset
* Ứng dụng: Lưu trữ phần tử có thể trùng lặp, kiểm tra sự xuất hiện nhanh chóng.
#### Unordered Map
* Ứng dụng: Lưu trữ và tìm kiếm cặp khóa-giá trị không cần thứ tự.
#### Unordered Multimap
* Ứng dụng: Lưu trữ và tìm kiếm các cặp khóa-giá trị không cần thứ tự, cho phép các khóa trùng lặp.

## 4. Bitset
#### 4.1. Khởi tạo:
* Khởi tạo từ một chuỗi ký tự: bitset<8> b("10101010");
* Khởi tạo từ số nguyên: bitset<8> b(170);
* Độ phức tạp: O(n/32) hoặc O(n/64).
#### 4.2. Toán tử []:
* Truy cập hoặc thay đổi giá trị của bit tại vị trí cụ thể: b[2] = 1;
* Độ phức tạp: O(1).
#### 4.3. `set`:
* Đặt tất cả các bit hoặc một bit cụ thể thành 1: `b.set();` hoặc `b.set(pos);`
* Độ phức tạp:
    * O(n/32) hoặc O(n/64) cho `b.set()`
    * O(1) cho `b.set(pos)`.
#### 4.4. `reset`:
* Đặt tất cả các bit hoặc một bit cụ thể thành 0: `b.reset();` hoặc `b.reset(pos);`
* Độ phức tạp:
    * O(n/32) hoặc O(n/64) cho `b.reset()`
    * O(1) cho `b.reset(pos).`
#### 4.5. `flip`:
* Đảo ngược tất cả các bit hoặc một bit cụ thể: `b.flip();` hoặc `b.flip(pos);`
* Độ phức tạp:
    * O(n/32) hoặc O(n/64) cho b.flip()
    * O(1) cho b.flip(pos).
#### 4.6. `count`:
* Đếm số bit có giá trị 1: `b.count();`
* Độ phức tạp: `O(n/32)` hoặc `O(n/64)`.
#### 4.7. `any`:
* Kiểm tra xem có bit nào có giá trị 1 không: `b.any();`
* Độ phức tạp: `O(n/32)` hoặc `O(n/64)`.
#### 4.8 `none`:
* Kiểm tra xem tất cả các bit có giá trị 0 không: `b.none();`
* Độ phức tạp: `O(n/32)` hoặc `O(n/64)`
#### 4.9 `all`:
* Kiểm tra xem tất cả các bit có giá trị 1 không: `b.all();`
* Độ phức tạp: `O(n/32)` hoặc `O(n/64)`.
#### 4.10. Toán tử bitwise:
* AND, OR, XOR: `b1 & b2`, `b1 | b2`, `b1 ^ b2`
* Độ phức tạp: O(n/32) hoặc O(n/64).
#### 4.11. `to_string`:
* Chuyển đổi bitset thành chuỗi ký tự: `b.to_string();`
* Độ phức tạp: O(n).
#### 4.12. `to_ulong` `và to_ullong`:
* Chuyển đổi bitset thành số nguyên không dấu: `b.to_ulong();` hoặc `b.to_ullong();`
* Độ phức tạp: O(1).

## 5. Set

## 6. Map
#### Ứng dụng:
* Lưu trữ và tìm kiếm cặp khóa-giá trị có thứ tự.
* Áp dụng trong các bài toán tra cứu và ánh xạ.

## 7. Multimap
#### Ứng dụng:
* Lưu trữ và tìm kiếm các cặp khóa-giá trị có thứ tự với các khóa trùng lặp.

## 8. Multiset
#### Ứng dụng: 
* Lưu trữ phần tử có thứ tự và có thể trùng lặp.
