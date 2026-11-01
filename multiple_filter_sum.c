#include<stdio.h>
int main(){

    int number;
    int count=0;
    int sum=0;

    printf("Enter the number (0 to exit):\n");
    scanf("%d",&number);
    

    while(number!=0){

        if(number<0){
            printf("Not valid number\n");
            return 0;
        }
        if(number % 3 ==0 || number % 5 ==0){
            count++;
            sum += number; 
        }else{
            printf("Number should be multiple of 3 and 5\n");
            return 0;
        }
        scanf("%d",&number);
    }
    printf("Multiple of 3 and 5 numbers Sum is %d\n",sum);
    printf("Count = %d",count);

    return 0;
}