#include<stdio.h>

float fahrenhiet(float celisus);

int main(){

    float celsius;

    printf("Enter the celsius\n");
    scanf("%f",&celsius);

   float result =  fahrenhiet(celsius);

    printf("Fahrenheit = %.2f\n",result);

    return 0;
}

float fahrenhiet(float celsius){

    float fahrenhiet_formula;

    fahrenhiet_formula = (9.0f / 5.0f) * celsius + 32.0f;

    return fahrenhiet_formula;
}