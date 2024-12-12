#include <stdio.h>

int main() {
    char str[] = "Hoang Duong";
    char ch;
    int count = 0;
    // In ra chuoi da khai bao
    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap mot ky tu: ");
    scanf("%c", &ch);
    //Dem so lan xuat hien cua ky tu trong chuoi
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("So lan xuat hien cua ky tu '%c' trong chuoi: %d\n", ch, count);
    return 0;
}
