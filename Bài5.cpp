#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    int soTu = 0;
    // Nhap mot chuoi tu ban phim
    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    // Dem so tu trong chuoi
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            soTu = 0;
        } else if (soTu == 0) {
            soTu = 1;
            count++;
        }
    }
    // In ra so tu trong chuoi
    printf("So tu trong chuoi: %d\n", count);
    return 0;
}
