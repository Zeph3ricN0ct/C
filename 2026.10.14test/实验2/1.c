#include <stdio.h>

int main() {
    int hours, minutes, seconds; // 声明时、分、秒变量
    int sum;           // 用来存总秒数

    printf("enter hours,minutes,seconds:\n");
    
    //取三个整数
    scanf("%d %d %d", &hours, &minutes, &seconds);

    //1小时=3600秒，1分钟=60
    sum = hours * 3600 + minutes * 60 + seconds;

    // 输出
    printf("sum is;%d s\n", sum);

    return 0;
}