/******************************************************************************
 * Họ và tên: [Nguyễn Tấn Dương]
 * MSSV:      [ps47990]
 * Lớp:       [cs21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  


#include <stdio.h>
#include <string.h>

int main() {
    char str[5][100];
    char temp[100];

    printf("Nhap 5 chuoi:\n");
    for(int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0'; // xoa ky tu xuong dong
    }

    // Sap xep theo thu tu alphabet (Bubble Sort)
    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}


