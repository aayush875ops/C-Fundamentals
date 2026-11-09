#include<stdio.h>
int main(){

    int service;
    int rating;

    printf("Enter the service\n");
    scanf("%d",&service);

    if(service>=5){
        printf("Enter the performance rate between (1 to 5)\n");
        scanf("%d",&rating);

        if(rating>=4 && rating<=5){
            printf("Eligible for special bonus\n");
        }
        else{
            printf("Eligible for regular bonus\n");
        }
    }
    else if(service<5){
        printf("Not eligible to bonus\n");
    }

    return 0;


}