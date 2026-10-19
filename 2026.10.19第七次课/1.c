#include<stdio.h>
int main(){
    int a;
    int b[100];
    int i;
    double sum = 0, avg;

    printf("请输入学生个数a：");
    scanf("%d", &a);

    for(i = 0; i < a; i++)
    {
        printf("请输入第%d个学生成绩：",i+1);
        scanf("%d", &b[i]);
        sum = sum + b[i];
    }
    avg = sum / a;
    printf("平均数 = %.2f\n", avg);
    for(i=0;i<a;i++)
    {
        if(b[i]>avg)
        {
            printf("第%d个学生成绩大于平均数\n",i+1);
        }
    }
    return 0;
}