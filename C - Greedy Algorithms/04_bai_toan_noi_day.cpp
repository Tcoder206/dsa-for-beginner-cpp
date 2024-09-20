/*

Bài toán:
- Cho n dây với chiều dài khác nhau. Cần phải nối các dây lại với nhau thành một dây
- Chi phí nối hai dây lại với nhau đc tính bằng tổng độ dài hai dây
- Nhiệm vụ của bài toán là tìm cách nối các dây lại với nhau thành một dây
sao cho chi phí nối các dây lại với nhau là ít nhất

VD:
Số lượng dây: 4; Độ dài dây L[] = {4, 3, 2, 6}
Chi phí nối dây nhỏ nhất: OPT = 29
Cách làm: 
- Dây số 3 nối với dây số 2 -> 3 dây vs độ dài 4 5 6
- Dây độ dài 4 nối vs dây độ dài 5 -> 2 dây vs độ dài 6 9
- Nối 2 dây còn lại 6 + 9 = 15
- Tổng chi phí nhỏ nhất là 5 + 9 + 15 = 29

*/