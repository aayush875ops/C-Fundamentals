#include<stdio.h>
int main(){
    float celsius;
    float fahrenheit;

    printf("Enter the fahrenheit\n");
    scanf("%f",&fahrenheit);

    if(fahrenheit < -459.67f){
        printf("Cant proceed this number\n");
    }
    else{

    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    printf("celsius = %.2f",celsius);
}
return 0;
}