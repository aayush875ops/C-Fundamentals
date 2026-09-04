#include<stdio.h>
int main(){
    int number; 


    printf("enter the number");
    scanf("%d",&number); 

    int temp=number;
    int reverse=0;
    while(number!=0){
        int digit=number % 10;
        reverse=reverse * 10 + digit;
        number = number / 10;
    }

    
    printf(" Reverse number of %d is : %d\n",temp,reverse);
    return 0;
}