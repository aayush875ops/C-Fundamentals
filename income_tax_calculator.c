#include<stdio.h>
int main(){

    double income;
    double tax=0;
    int age;
    double total=0;

    printf("Enter the income and age\n");
    scanf("%lf %d",&income,&age);

    if(income<=0 || age <=0){
        printf("Error invalid input\n");
        return 0;

    }

    if(age>=60){
        if(income>0 && income<=300000){
            printf("No tax\n");
        }
        else if(income>300000 && income<=500000){
            tax = income * 0.05;
            total = income + tax;
            printf("Tax is 5%% so Total = %.2lf\n",total);
        }
        else if(income>500000){
            tax = income * 0.20;
            total = income + tax;
            printf("Tax is 20%% so Total = %.2lf\n",total);
        }

    }
    else if(age < 60){
        if(income>0 && income <= 250000){
            printf("No tax\n");
        }
        else if(income>250000 && income<=500000){
            tax = income * 0.05;
            total = income + tax;
             printf("Tax is 5%% so Total = %.2lf\n",total);
        }
        else if(income>500000){
            tax = income * 0.20;
            total = income + tax;
             printf("Tax is 20%% so Total = %.2lf\n",total);
        }
    }

    return 0;
}