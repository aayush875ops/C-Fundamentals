#include<stdio.h>
int main(){
    float salary;
    float hra_percent,da_percent;

    printf("Enter the salary\n");
    scanf("%f",&salary);

    printf("Enter the hra and da\n");
    scanf("%f %f",&hra_percent,&da_percent);
    if(salary < 0 || hra_percent < 0 || da_percent < 0){
        printf("Cant proceed with this number\n");
    }
    else{

   float hra_amount = salary *(hra_percent / 100.0f);
  float  da_amount = salary * (da_percent / 100.0f);

    float gross_salary = salary + hra_amount + da_amount;

    printf("%.2f",gross_salary);
    }
    return 0;
}