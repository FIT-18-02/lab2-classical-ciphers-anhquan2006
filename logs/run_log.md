# Run Log – FIT4012 Lab 2

## Caesar Cipher

- [x] Đã chạy Caesar encrypt với `I LOVE YOU`, key `3` -> **Kết quả:** `L ORYH BRX`
- [x] Đã chạy Caesar encrypt với `hello world`, key `5` -> **Kết quả:** `mjqqt btwqi`
- [x] Đã chạy Caesar decrypt với `LORYH BRX`, key `3` -> **Kết quả:** `I LOVE YOU`

## Rail Fence Cipher

- [x] Đã chạy Rail Fence encrypt với `2` rails cho văn bản `ATTACKATDAWN` -> **Kết quả:** `ATCATWTAKADN`
- [x] Đã chạy Rail Fence encrypt với `4` rails cho văn bản `HELLOWORLD` -> **Kết quả:** `HOLELWRDLO`
- [x] Đã chạy Rail Fence decrypt với `2` rails cho `ATCATWTAKADN` -> **Kết quả:** `ATTACKATDAWN`

## Validation / File input

- [x] Đã kiểm tra đầu vào không hợp lệ: Hệ thống thông báo lỗi khi nhập key là ký tự đặc biệt hoặc số âm.
- [x] Đã đọc dữ liệu thành công từ file `data/input.txt` và xuất kết quả ra màn hình/file log.

## Điều em học được từ bài lab

Qua bài lab này, em đã nắm vững cơ chế hoạt động của các hệ mật mã cổ điển. Cụ thể, hệ Caesar sử dụng phép thay thế theo vòng tròn bảng chữ cái, còn Rail Fence sử dụng kỹ thuật hoán vị theo mô hình đường zigzag. Em cũng đã rèn luyện thêm kỹ năng xử lý file và chuẩn hóa dữ liệu đầu vào trong ngôn ngữ lập trình C++.
