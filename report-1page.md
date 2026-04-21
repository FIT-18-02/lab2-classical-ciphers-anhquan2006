# Report 1 Page – FIT4012 Lab 2

## 1. Mục tiêu
Tìm hiểu và cài đặt các hệ mật mã cổ điển bao gồm Caesar Cipher và Rail Fence Cipher để hiểu về kỹ thuật thay thế và hoán vị trong an toàn thông tin.

## 2. Cách làm
- Hoàn thiện Caesar Cipher cho chữ thường, dấu cách và giải mã.
- Hoàn thiện Rail Fence Cipher cho giải mã, giữ dấu cách, kiểm tra đầu vào và đọc file.
- Chạy thử trên nhiều test case để đảm bảo tính chính xác.

## 3. Kết quả chính

### 3.1 Caesar Cipher
| Input | Key | Ciphertext / Plaintext | Nhận xét |
| :--- | :--- | :--- | :--- |
| I LOVE YOU | 3 | L ORYH BRX | Mã hóa thành công, dịch chuyển 3 ký tự |
| hello world | 5 | mjqqt btwqi | Mã hóa đúng với chữ thường |
| LORYH BRX | 3 | I LOVE YOU | Giải mã chính xác về văn bản gốc |

### 3.2 Rail Fence Cipher
| Input | Key | Ciphertext / Plaintext | Nhận xét |
| :--- | :--- | :--- | :--- |
| HELLOWORLD | 2 | HLOOL ELWRD | Mã hóa theo 2 hàng zigzag thành công |
| ATTACKATDAWN | 3 | AKWTA CATDA TN | Mã hóa theo 3 hàng chính xác |

## 4. Điều em học được
Em đã nắm vững cách thức hoạt động của các thuật toán mã hóa cổ điển và cách triển khai chúng bằng ngôn ngữ lập trình. Đồng thời, em cũng học được cách xử lý các trường hợp ngoại lệ như dấu cách và ký tự đặc biệt khi mã hóa.
