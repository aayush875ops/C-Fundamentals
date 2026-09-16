#include<stdio.h>
int main(){
    float principal;
    float rate,time;
    float simple_interest;

    printf("Enter the principal value");
    scanf("%f",&principal);

    printf("Enter the rate value");
    scanf("%f",&rate);

    printf("Enter the time value");
    scanf("%f",&time);

    if(principal < 0 || rate< 0 || time < 0){
        printf("Cant be proceed with negative numbers\n");
    }
    else{

    simple_interest = principal * rate * time / 100;

    printf("SI is %.2f",simple_interest);
    }
    return 0;

}