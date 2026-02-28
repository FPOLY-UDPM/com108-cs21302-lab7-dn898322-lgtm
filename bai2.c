/******************************************************************************
 * Họ và tên: [Nguyễn Tấn Dương]
 * MSSV:      [PS47990]
 * Lớp:       [cs21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    // Tài khoản mẫu (có thể thay đổi)
    char correctUsername[] = "admin";
    char correctPassword[] = "123456";

    printf("Nhap username: ");
    scanf("%s", username);

    printf("Nhap password: ");
    scanf("%s", password);

    // So sánh username và password
    if (strcmp(username, correctUsername) == 0 && 
        strcmp(password, correctPassword) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}










