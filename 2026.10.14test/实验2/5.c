#include <stdio.h>
int main(){
    //声明
    float t;

    printf("enter t:");
    //读取输入温度，进行等级判断
    scanf("%f",&t);
    if (t<0){
        printf("低温警告");
    } else if (t<=80){
        printf("温度正常");
    } else if(t<=85){
        printf("接近高温阈值，注意监控");
    } else if(t>85){
        printf("高温预警");
    } 
    return 0;
}
