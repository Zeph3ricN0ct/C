#include <stdio.h>

int main(){
    float fEnglish, fChinese, fMath, fSum, fAve;
   
    scanf("%f%f%f", &fEnglish, &fChinese, &fMath);
    fSum=fEnglish + fChinese + fMath;
    fAve=fSum/3;
    printf("Sum=%.1f\nAve=%.1f", fSum, fAve);
    return 0;
}