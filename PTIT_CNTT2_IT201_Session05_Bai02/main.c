#include <stdio.h>

int sum(int n) {
    if (n==0) {
        return 0;
    }
    return n+sum(n-1);
}

int main(void) {
    int number;
    printf("nhap n: ");
    scanf("%d", &number);
    sum(number);
    int result = sum(number);
    printf("tong: %d\n", result);
    return 0;
}