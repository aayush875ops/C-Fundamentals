#include<stdio.h>
int main(){

    int number;
    int sum=0;
    printf("Enter the number\n");
    scanf("%d",&number);

    if(number <0){
        printf("Enter the positive number\n");
        return 0;
    }
    

    while(number>0){
        int remainder = number % 10;
        if(remainder%2==0){
            sum += remainder;
        }
            number /=10;
            
        
    }
        printf("Sum=%d\n",sum);
    
    return 0;
}