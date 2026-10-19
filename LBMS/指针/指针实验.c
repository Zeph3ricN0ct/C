#include <stdio.h>
void f(int* p){
    *p=100;
}
int main(){
    int i=0;
    printf("before i = %d\n",i);
    f(&i);
    printf("after i = %d\n",i);
    return 0;
}