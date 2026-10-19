#include <stdio.h>

int main(){
    int iYear=2024, iMonth=2, iDay=23, iVol=250;
    float fPrice=4.5;
    printf("晨光盒装牛奶\n每盒%.2f元\n容量%dml\n产地深圳\n生产日期%d年%d月%d日",fPrice, iVol, iYear, iMonth, iDay);
    return 0;
}