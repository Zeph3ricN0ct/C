#include <stdio.h>
int main(){
    //声明
    int score;

    printf("enter score:");
    //读取输入分数，进行等级判断
    scanf("%d",&score);
    if (score>=90){
        printf("grade A");
    } else if (score>=80){
        printf("grade B");
    } else if(score>=70){
        printf("grade C");
    } else if(score>=60){
        printf("grade d");
    } else{
        printf("grade E");
    }
    return 0;
}
