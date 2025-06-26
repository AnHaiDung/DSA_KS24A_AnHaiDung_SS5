#include <stdio.h>
#include <string.h>


int symmetryChain(char arr[],int left, int right){
    if(left>=right) {
        return 1;
    }
    if (arr[left] != arr[right]) {
        return 0;
    }
    return symmetryChain(arr,left+1,right-1);
};

int main(void) {
    char str[100];
    printf("nhap chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int result = symmetryChain(str,0,strlen(str)-1);
    if (result == 0) {
        printf("chuoi khong doi xung\n");
    }else {
        printf("chuoi doi xung\n");
    }
    return 0;
}