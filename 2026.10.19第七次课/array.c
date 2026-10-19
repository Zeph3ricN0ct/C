/*#include <stdio.h>
int main()
{
    int i;
    int array[]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
   printf("%d\n",sizeof(array)/sizeof(array[0]));
}
*/
/*#include <stdio.h>
int main()
{
    int a[3]={2,4,0};
    a[2]=a[0]+a[1];
    printf("%d %d %d\n",a[0],a[1],a[2]);
} */
#include <stdio.h>
int main()\
{
    int sum=0,i,t=0;
    do
    {
        scanf("%d",&i);
        sum+=i;
        t++;
    }while(i>0);
    printf("%d\n",sum/t);
}