#include <stdio.h>

int sum(int a, int b) {
    if (a>b) {
        return 0;
    }
    return a+sum(a+1, b);
}

int main(void) {
    int firstNum;
    int secondNum;
    printf("nhap so thu nhat: ");
    scanf("%d", &firstNum);
    printf("nhap so thu hai: ");
    scanf("%d", &secondNum);
    if (firstNum>secondNum||firstNum < 0 || secondNum < 0) {
        printf("khong hop le\n");
        return 0;
    }
    int result = sum(firstNum, secondNum);
    printf(" %d\n", result);
    return 0;
}