#include <stdio.h>

int main() {
    int i;
    printf("10以内能被3整除的数有:\n");
    
    for (i = 1; i <= 10; i++) {
        if (i % 3 == 0) {        // % 是取余运算符，余数为0说明能整除
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}