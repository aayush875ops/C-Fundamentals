#include<stdio.h>
int main(){

    int age;

    printf("Enter the age\n");
    scanf("%d",&age);

    if(age <0){
        printf("Age cannot be negative\n");
        return 0;
    }
    if(age >=18){
        printf("Eligible to vote\n");
    }
    else {
        printf("Not Eligible to vote\n");
    }
    
    return 0;
}