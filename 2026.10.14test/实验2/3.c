#include <stdio.h>
int main()
{
    int max,a,b,c,d;
    printf("enter four numbers:");
    scanf("%d %d %d %d ",&a,&b,&c,&d);
    max=a;
    if (b>max){
        max=b;
    }
    if (c>max){
        max=c;
    }
    if (d>max){
        max=d;
    }
    printf("max number is:%d\n",max);
    return 0;
}
