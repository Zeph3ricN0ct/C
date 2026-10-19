#include <stdio.h>
int main(){
    int imax, ix, iy;
    printf("enter:");
    scanf("%d%d", &ix ,&iy);
    imax= (ix>iy)? ix:iy;
    printf("%d\n", imax);
    return 0;
}