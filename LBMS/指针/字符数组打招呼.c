#include <stdio.h>
int main() {
    int n;
    int i=0;
    char name[20];
    printf("enter chinese n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("enter chinese name:");
        scanf("%19s",name);
        printf("%s,hello!\n",name);
    }
    printf("greeting is over.");
    return 0;
}
