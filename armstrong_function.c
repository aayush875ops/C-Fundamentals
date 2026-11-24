
#include<stdio.h>

int armstrong(int number);

int main(){

    int number;

    printf("Enter the number\n");
    scanf("%d",&number);

    if(number<0){
        printf("Error invalid input\n");
        return 0;
    }

    int result = armstrong(number);

    if(result==number){
        printf("Armstrong number\n");
    }
    else{
        printf("Not armstrong number");
    }

    return 0;
}

int armstrong(int number){
    int count=0;
    int temp,i;
    int sum=0,digit;

    

    temp = number;

    do{
        count++;
        temp /=10;
    }while(temp!=0);

    temp =number;
    while(temp>0){
       
        digit = temp % 10;

        int term=1;
        for(i=1;i<=count;i++){
          term *= digit;
        }
        sum += term;
        temp /=10;  
    }
    return sum;
}