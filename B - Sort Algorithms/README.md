**1.** Selection Sort (Sắp xếp chọn)  `16/8/2024`
- Big-O Notation: O(n^2)
- Nên dùng khi: Chủ yếu dùng cho mục đích giáo dục
    
**2.** Bubble Sort (Sắp xếp nổi bọt)  `16/8/2024`
- Big-O Notation:
    + Average Case or Worst Case: O(n^2)
    + Best Case: O(n)
- Nên dùng khi: Chủ yếu dùng cho mục đích giáo dục

**3.** Insertion Sort (Sắp xếp chèn)  `16/8/2024`
- Big-O Notation:
    + Average Case or Worst Case: O(n^2)
    + Best Case: O(n)
- Nên dùng khi: Dùng trong bộ nhớ nhỏ hoặc dữ liệu đã gần đc sắp xếp

**4.** Merge Sort (Sắp xếp trộn) `20/8/2024`
- Big-O Notation: O(n*log(n))
- Nên dùng khi: Dùng trong bộ nhớ lớn, sắp xếp file hoặc quản lý csdl

**5.** [Quick Sort (Sắp xếp nhanh)](https://www.youtube.com/watch?v=Vtckgz38QHs&ab_channel=BroCode)
- Big-O Notation:
    + Worst Case: O(n^2)
    + Average Case or Best Case:  O(n*log(n))
- Nên dùng khi: Phổ biến trong sắp xếp danh sách, tìm kiếm nhị phân
__**a.**__ Quy hoạch Lomuto `21/8/2024`
__**b.**__ Quy hoạch Hoare `23/8/2024`

**6.** [Counting Sort (Đếm phân phối) `25/8/2024`](https://www.youtube.com/watch?v=EItdcGhSLf4)
- Big-O Notation: O(Max k + n)
- Nên dùng khi: Các bài toán có số đếm giới hạn, sắp xếp chữ cái, mảng có giá trị nhỏ

**7.** [Radix Sort (Sắp xếp theo cơ số)](https://www.youtube.com/watch?v=e4Oide9BsH8&ab_channel=%C3%94ngDev)
- Big-O Notation: O(Max k * n)
- Nên dùng khi: Các bài toán có số đếm giới hạn, sắp xếp chữ cái, mảng có giá trị nhỏ

**8.** [Heap Sort (Sắp xếp vun đống)](https://www.youtube.com/watch?v=XFI96Z7i3LE&ab_channel=28tech)
- Big-O Notation: O(n*log(n))
- Nên dùng khi: Sắp xếp các tập dữ liệu lớn khi cần tính nhất quán về hiệu suất

9. Pigeonhole Sort
- Big-O Notation: O(n + k), k là phạm vi giá trị
- Nên dùng khi: Cần sắp xếp nhanh chóng với phạm vi giá trị nhỏ

10. Bucket Sort
- Big-O Notation: 
    + Best Case: O(n)
    + Average Case: O(n + k), k là số lượng bucket
    + Worst Case: O(n^2) (Khi các phần tử rơi vào cùng 1 xô duy nhất)
- Nên dùng khi: 
    + Cần sắp xếp 1 tập dữ liệu phân bố giá trị đều yêu cầu thgian thực thi nhanh
    + Hữu dụng khi sắp xếp số thực hoặc các giá trị có khoảng giá trị cụ thể

11. [Shell Sort](https://www.youtube.com/watch?v=408TQi6MWmI)
- Big-O Notation:
    + Average Case: O(n*log(n)^2)
    + Best Case: O(n)
- Nên dùng khi: Sắp xếp 1 mảng có kích thước vừa phải

12. Bitonic Sort
- Big-O Notation: O(n*log(n)^2)
- Nên dùng khi: Khi cần sắp xếp trong trong môi trường song song hoặc đa xử lý

13. Intro Sort ( Thường là thuật toán đc sử dụng cho hàm sort() )
- Big-O Notation: O(n*log(n))
- Nên dùng khi: Sắp xếp khi cần một thuật toán mạnh và an toàn

14. Cycle Sort
- Big-O Notation: O(n^2)
- Nên dùng khi: Cần tối ưu hóa số lần ghi vào bộ nhớ

15. Tim Sort
- Big-O Notation:
    + Average Case: O(n*log(n))
    + Best Case: O(n)
- Nên dùng khi: Thuật toán sắp xếp mặc định cho python hoặc java

16. External Sort
- Big-O Notation: O(n*log(n))
- Nên dùng khi: Sắp xếp tệp dữ liệu lớn vượt quá khả năng xử lý của bộ nhớ, VD như quản lý CSDL hoặc xử lý tập tin lớn

*Ngoài ra còn những thuật toán sắp xếp khác nhưng hiệu suất thấp, độ phức tạp cao hoặc tính ứng dụng ít hay là ko đc ưa chuộng như:* `Bogo Sort`, `Gnome Sort`, `Group Sort`, `Pancake Sort`, `Patience Sort`, `Smooth Sort`, `Library Sort`, `Queue Sort`