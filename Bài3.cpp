#include<stdio.h>
int main(){
	char str[100];
	int length = 0;
	printf("Nhap mot chuoi ");
	fgets(str, sizeof(str), stdin);
	while (str[length] != '\0') {
	    length++;
	}
	for (int i = length-1; i>=0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
