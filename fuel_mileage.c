#include<stdio.h>
int main(){

    float distance;
    float fuel_consumed;

    printf("Enter the distance\n");
    scanf("%f",&distance);

    printf("Enter the fuel consumed\n");
    scanf("%f",&fuel_consumed);

    if(distance < 0 || fuel_consumed <=0 ){
        printf("Cant proceed with these numbers\n");
    }
    else{

    float mileage = distance / fuel_consumed;

    printf("mileage is = %.2f",mileage);
    }
    return 0;

}