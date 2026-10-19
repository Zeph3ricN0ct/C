#include <stdio.h>
int main(){
    int arr[5];
    printf("enter 5 int \n");
    for(int i=0;i<5;i++){
        scanf(" %d", &arr[i]);
        printf("your numbers are:%d\n",arr[i]);
    };
    return 0; 
}