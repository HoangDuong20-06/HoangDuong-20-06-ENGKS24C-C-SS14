#include <stdio.h>
int main() {
    char str[] = "Hoang Duong";
    int count = 0;
    // Dem so luong chu cai trong chuoi
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    // In ra chuoi da khai bao va so luong ky tu chu cai
    printf("Chuoi da khai bao: %s\n", str);
    printf("So luong ky tu chu cai trong chuoi: %d\n", count);
    return 0;
}
