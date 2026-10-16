#include<stdio.h>
int main(){

    int number;
    int max_number =0;


    printf("Enter the  positive numbers\n");
    scanf("%d",&number);

    if(number <0){
        printf("Enter positive  integers\n");
        return 0;
    }

    while(number >0){
        int remainder = number % 10;
        if(max_number < remainder){
            max_number = remainder;
        }
        number /=10;
    }
    printf("Largest digit = %d",max_number);
    return 0;
}