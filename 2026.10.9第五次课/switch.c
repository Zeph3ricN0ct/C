#include <stdio.h>
int main(){
    int category=2;
    float price=299.9;
    switch(category){
        case 1:
            if(price<500){
                printf("group0");
            }
            else if(price<=1000){
                printf("group1");
            }
            else if(price>1000){
                printf("group2");
            }
        break;
        case 2:
            if(price<200){
                printf("group3");
            }
            else if(price<=500){
                printf("group4");
                printf("you need to pay %.2f",price-price*0.08);
            }
            else if(price>500){
                printf("group5");
            }
    }
}