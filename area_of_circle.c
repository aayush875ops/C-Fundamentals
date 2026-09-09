#include<stdio.h>
int main(){
    
    float radius;
    float area;

    printf("Enter the radius");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;

    printf("Area of circle is %.2f",area);
    return 0;

}