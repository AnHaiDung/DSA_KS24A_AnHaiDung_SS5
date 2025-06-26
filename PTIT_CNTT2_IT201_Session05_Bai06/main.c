#include <stdio.h>

int sum(int arr[],int n) {
    if(n==0) return 0;
    return arr[n-1]+sum(arr,n-1);
}

int main(void) {
    int len;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for(int i = 0; i < len; i++) {
        printf("nhap phan tu %d: ",i);
        scanf("%d", &arr[i]);
    }
    int result = sum(arr, len);
    printf("%d", result);
    return 0;
}