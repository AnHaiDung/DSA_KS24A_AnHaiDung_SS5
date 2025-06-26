#include <stdio.h>

void number(int n){
    if (n==0)return;
    number(n-1);
    printf("%d\n", n);
}

int main() {
    int num=0;
    printf("nhap n: ");
    scanf("%d", &num);
    number(num);
    return 0;
}