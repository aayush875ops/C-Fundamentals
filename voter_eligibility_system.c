#include<stdio.h>
int main(){

    int age;
    int voter;

    printf("Enter the age\n");
    scanf("%d",&age);

    printf("Enter the voter id ( 1 or 0 ) \n");
    scanf("%d",&voter);

    if(age<0 || (voter != 1 && voter != 0)){
        printf("Age is invalid\n Enter valid voter id 1 or 0\n");
        return 0;
    }
    if(age>=18){
        if(voter==1){
            printf("Eligible to vote\n");
        }
        else if(voter==0){
            printf(" Voter id Required\n");
        }
    }

    else if(age<18){
        printf("Not Eligible to vote\n");
    }
    
    return 0;
}
