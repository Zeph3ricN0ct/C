#include <stdio.h>
int main(){
 int num, result;
 while (1){   
    printf("enter number:");
    scanf("%d", &num);
    if (num>5){
        result=num+3;
        printf("result:%d\n", result);
    }else if(num>=0&&num<=5){
        printf("result=0\n");}
     else if(num<0){
        result=2*num+30;
        printf("result:%d\n",result);
     }
    }
}    
