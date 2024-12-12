#include<stdio.h>
int main(){
	char str[100];
	printf("Nhap mot chuoi ");
	fgets(str, sizeof(str), stdin);
	for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    return 0;
}
