#include<stdio.h>
int main(){

    int age;
    int salary;
    int score;

    printf("Enter the age\n");
    scanf("%d",&age);

    if(age>=21){
        printf("Enter the salary\n");
        scanf("%d",&salary);

        if(salary>=25000){
            printf("Enter the credit score\n");
            scanf("%d",&score);
            if(score>=700){
                printf("Loan eligible\n");
            }
            else{
                printf("Required credit score atleast 700\n");
            }
        }else{
            printf("Salary insufficient to enroll\n");
        }    
    }else{
        printf("Age requirement is least 21\n");
    }


    return 0;
}