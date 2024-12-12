#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    // Nhap chuoi tu ban phim
    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    // Tinh do dai cua chuoi
    while (str[length] != '\0') {
        length++;
    }
    // In ra chuoi va do dai chuoi
    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai chuoi la: %d\n", length);
    return 0;
}

