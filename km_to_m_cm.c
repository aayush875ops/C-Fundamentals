#include<stdio.h>
int main (){

    float kilometers;
    float meters;
    float centimeters;

    printf("Enter the value");
    scanf("%f",&kilometers);

    if(kilometers<0){
        printf("Cant proceed with this number\n");
    }
    else{
        meters = kilometers * 1000.0f;
        centimeters = meters * 100.0f;

        printf("Meters = %.2f\n Centimeters = %.2f",meters,centimeters);

    }
    return 0;

}