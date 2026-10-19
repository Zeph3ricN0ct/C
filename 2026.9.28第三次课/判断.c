#include <stdio.h>
int main(){
    int iX, iY;
    printf("enter number: ");
    scanf("%d", &iX);
    iY=iX;
    if (iX<0){
        iY=-iX;
    }
    printf("%d\n", iY);
    return 0;

}