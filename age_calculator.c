#include<stdio.h>
int main(){
    int age;
    int months;
    int days;
    int leap_year;

    printf("Enter the person age\n");
    scanf("%d",&age);

    if(age<0){
        printf("Error cant proceed with these age\n");
    }
    else{
    leap_year = age / 4;

    months = age * 12;
    days = age * 365 + leap_year;

    printf("leap year are = %d\n",leap_year);
    
    printf("months = %d\ndays = %d",months,days);
}
return 0;
}