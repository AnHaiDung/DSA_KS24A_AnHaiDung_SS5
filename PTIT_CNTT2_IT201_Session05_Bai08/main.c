#include <ctype.h>
#include <stdio.h>
#include <string.h>

int recursive(char str[], int len) {
    if (len == 0) return 0;
    return recursive(str, len - 1)*10+(str[len-1]-'0');
}

int main() {
    char str[100];
    printf("nhap chuoi so: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0;str[i]!='\0' ; i++) {
        if (!isdigit(str[i])) {
            printf("khong hop le");
            return 0;
        }
    }
    int len = strlen(str);
    int result = recursive(str,len);
    printf("%d", result);
    return 0;
}