#include<stdio.h>
int main (){

    int total=0;
    int angle1;
    int angle2;
    int angle3;

    printf("Enter the sides of a triangle\n");

    scanf("%d %d %d",&angle1,&angle2,&angle3);

    if(angle1<=0 || angle2<=0 || angle3<=0){
        printf("Error: Invalid angle. Angles must be greater than 0.\n");
        return 0;
    }
    total = angle1 + angle2 + angle3;
    if(total == 180){
        printf("Valid Triangle\n");
    }
    else{
        printf("Invalid Triangle (Sum of angles must be 180).\n");
    }

    return 0;

}