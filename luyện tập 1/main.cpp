bài 1 
  # Tạo biến số nguyên (integer)
so_nguyen = 10

# Tạo biến số thực (float)
so_thuc = 3.14

# Tạo biến chuỗi (string)
chuoi = "Xin chào Python"

# In các biến ra màn hình
print("Số nguyên:", so_nguyen)
print("Số thực:", so_thuc)
print("Chuỗi:", chuoi)
  bài 2
  # Định nghĩa hằng số PI
PI = 3.14

# Khai báo bán kính hình tròn
r = 5

# Tính chu vi hình tròn
chu_vi = 2 * PI * r

# In kết quả
print("Chu vi hình tròn là:", chu_vi)
bài 3
  # Nhập hai số nguyên từ bàn phím
a = int(input("Nhập số nguyên thứ nhất: "))
b = int(input("Nhập số nguyên thứ hai: "))

# Tính các phép toán cơ bản
tong = a + b
hieu = a - b
tich = a * b
thuong = a / b

# In kết quả
print("Tổng =", tong)
print("Hiệu =", hieu)
print("Tích =", tich)
print("Thương =", thuong)
bài 4
  # Hàm tính tổng hai số
def sum_two_numbers(a, b):
    return a + b

# Gọi hàm
result = sum_two_numbers(5, 7)

# In kết quả
print("Tổng của hai số là:", result)
bài 5
  # Khai báo biến
name = "Thang"
age = 18
average_score = 8.5

# Hiển thị kiểu dữ liệu
print("Kiểu dữ liệu của name:", type(name))
print("Kiểu dữ liệu của age:", type(age))
print("Kiểu dữ liệu của average_score:", type(average_score))

# Xử lý dữ liệu
age_next_year = age + 1
doubled_score = average_score * 2

# In tất cả thông tin
print("\n--- Thông tin cá nhân ---")
print("Tên:", name)
print("Tuổi:", age)
print("Điểm trung bình:", average_score)

print("\n--- Thông tin sau xử lý ---")
print("Tuổi năm sau:", age_next_year)
print("Điểm trung bình nhân đôi:", doubled_score)

# Hiển thị kiểu dữ liệu của các biến mới
print("\n--- Kiểu dữ liệu ---")
print("age_next_year:", type(age_next_year))
print("doubled_score:", type(doubled_score))
