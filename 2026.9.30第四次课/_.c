#include <stdio.h>
int main(){
    int age;
    printf("your age:");
    scanf("%d", age);
    if (age<18){
        printf("未成年禁止入内!");
    } else{
        printf("成年人要对自己负责！");
    }
}