#include <stdio.h>
int main(){
    int N,a,b,c,d;
    printf("enter number:");
    scanf("%d", &N);
    a=N/1000;
    b=N/100%10;
    c=N/10%10;
    d=N%10;
    printf("%d %d %d %d,sum=%d\n",a,b,c,d,a+b+c+d);
    return 0;
}