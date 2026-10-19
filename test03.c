#include <stdio.h>
int main()\
{
    int sum=0,i,t=0;
    printf("enter number");
    do
    {
        scanf("%d",&i);
        sum+=i;
        t++;
    }while(i>0);
    printf("%d\n",sum/t);
}