#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Kiểm tra thông điệp hợp lệ (chữ cái và dấu cách)
bool is_valid_message(const string &text) {
    for (char c : text) {
        if (!isalpha(static_cast<unsigned char>(c)) && c != ' ') {
            return false;
        }
    }
    return true;
}

// Hàm mã hóa Rail Fence
string rail_fence_encrypt(const string &plaintext, int rails) {
    if (rails <= 1 || plaintext.empty()) return plaintext;

    vector<string> fence(rails, "");
    int rail = 0;
    int direction = 1;

    for (char c : plaintext) {
        fence[rail] += c;
        rail += direction;
        if (rail == rails - 1 || rail == 0) direction = -direction;
    }

    string ciphertext;
    for (const string &row : fence) ciphertext += row;
    return ciphertext;
}

// Hàm giải mã Rail Fence
string rail_fence_decrypt(const string &ciphertext, int rails) {
    if (rails <= 1 || ciphertext.empty()) return ciphertext;

    vector<vector<char>> fence(rails, vector<char>(ciphertext.length(), '\n'));
    int rail = 0;
    int direction = 1;

    // Đánh dấu các vị trí hình zigzag bằng ký tự '*'
    for (int i = 0; i < ciphertext.length(); ++i) {
        fence[rail][i] = '*';
        rail += direction;
        if (rail == rails - 1 || rail == 0) direction = -direction;
    }

    // Điền các ký tự từ bản mã vào các vị trí đã đánh dấu
    int index = 0;
    for (int i = 0; i < rails; ++i) {
        for (int j = 0; j < ciphertext.length(); ++j) {
            if (fence[i][j] == '*' && index < ciphertext.length()) {
                fence[i][j] = ciphertext[index++];
            }
        }
    }

    // Đọc theo hình zigzag để lấy lại bản rõ
    string plaintext = "";
    rail = 0;
    direction = 1;
    for (int i = 0; i < ciphertext.length(); ++i) {
        plaintext += fence[rail][i];
        rail += direction;
        if (rail == rails - 1 || rail == 0) direction = -direction;
    }
    return plaintext;
}

// Hàm đọc thông điệp từ file
string read_message_from_file(const string &path) {
    ifstream fin(path);
    string line;
    if (getline(fin, line)) return line;
    return "";
}

int main() {
    cout << "=== Rail Fence Cipher Demo ===\n";
    cout << "1. Encrypt\n2. Decrypt\n3. Read from file and encrypt\nChoose: ";

    int choice;
    cin >> choice;
    cin.ignore();

    string message;
    int rails;

    if (choice == 3) {
        message = read_message_from_file("data/input.txt");
        cout << "Message from file: " << message << "\n";
    } else {
        cout << "Enter message: ";
        getline(cin, message);
    }

    cout << "Enter rails: ";
    cin >> rails;

    if (message.empty() || !is_valid_message(message)) {
        cout << "Invalid input. Only letters and spaces are allowed.\n";
        return 0;
    }

    if (choice == 1 || choice == 3) {
        cout << "Ciphertext: " << rail_fence_encrypt(message, rails) << "\n";
    } else if (choice == 2) {
        cout << "Plaintext: " << rail_fence_decrypt(message, rails) << "\n";
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
