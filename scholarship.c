#include<stdio.h>
int main(){

    int marks;

    printf("Enter the Marks\n");
    scanf("%d",&marks);

    if(marks < 0 || marks > 100){
        printf("Marks should be between 1-100\n");
        return 0;
    } 

    if(marks >=90 && marks <= 100){
        printf("90%% Scholarship\n");
    }
    else if(marks >=80 && marks < 90){
        printf("85%% Scholarship\n");
    }
    else if(marks >=70 && marks < 80){
        printf("80%% Scholarship\n");
    }
    else if(marks >=60 && marks < 70){
        printf("75%% Scholarship\n");
    }
    else if(marks < 60){
        printf("50%% Scholarship\n");
    }
    return 0;

}