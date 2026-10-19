#include <stdio.h>
int main(){
    char day;
    printf("enter number:");
    scanf("%c", &day);
    switch(day)
    {
        case'1':printf("Monday\n");break;
        case'2':printf("Tuesday\n");break;
        case'3':printf("Wednesday\n");break;
        case'4':printf("Thrusday\n");break;
        case'5':printf("Friday\n");break;
        case'6':printf("Saturday\n");break;
        case'7':printf("Sunday\n");break;
        default:printf("invalid\n");break;
    }
    return 0;
}