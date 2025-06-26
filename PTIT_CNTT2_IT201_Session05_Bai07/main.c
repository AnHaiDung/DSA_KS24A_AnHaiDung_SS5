#include <stdio.h>

int fibonacci(int arr[],int n, int index, int next) {
    if (index >= n) {
        return 0;
    }
    if (index == 0) {
        arr[index] = 0;
        next = 1;
    }else if(index == 1) {
        arr[index] = 1;
        next = 1;
    }else {
        arr[index] = arr[index - 1] + arr[index - 2];
        next = arr[index] +arr[index - 1];
    }
    return arr[index] + fibonacci(arr, n, index + 1, next);

}

int main(void) {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("khong hop le\n");
    }
    int arr[n];
    fibonacci(arr,n,0,1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}