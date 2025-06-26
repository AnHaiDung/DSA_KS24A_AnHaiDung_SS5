#include <stdio.h>

int factorial(int n) {
    if (n==1) {
        return 1;
    }
    return n*factorial(n-1);
}

int main(void) {
    int num;
    printf("nhap n: ");
    scanf("%d", &num);
    factorial(num);
    int result = factorial(num);
    printf("giai thua cua %d: %d\n",num, result);
    return 0;
}