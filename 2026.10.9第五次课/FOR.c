/*#include <stdio.h>
int main(){
    for(int i=1;i<=50;i++){
        if((i%2==0)&&(i%3!=0)){
            printf("%d\n",i);
        }
        else if((i>=40)&&(i%2==0)){
            break;
        }
    }
}*/
#include <stdio.h>//这段代码完胜我的代码
int main(){
    for(int i=1;i<=50;i++){
        if(i%2!=0){
            continue;
        }
        if(i%3==0){
            continue;
        }
        if(i>40){
            break;
        }
        printf("%d\n",i);
    }
}