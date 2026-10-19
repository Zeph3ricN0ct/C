#include <stdio.h>
int main()
{
    char ch[]="ABCD";
    char* ptr=ch;
    printf("before change ch:%s\n",ptr);
    
    *(ptr+4)='g';
    printf("after change ch:%s\n",ptr);
    return 0;
}