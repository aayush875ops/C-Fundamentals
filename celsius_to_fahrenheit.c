#include<stdio.h>
int main(){
    float celsius;
    float fahrenheit;

    printf("Enter the celsius\n");
    scanf("%f",&celsius);

    if(celsius < -273.15f){
        printf("Cant proceed this number\n");
    }
    else{

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("fahrenheit = %.2f",fahrenheit);
}
return 0;
}