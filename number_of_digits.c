#include<stdio.h>
int main(){
    int number;
    int count=0;

    printf("Enter the number");
    scanf("%d",&number);

    int temp=number;
    do{
        count++;
        temp = temp / 10;
    }while(temp != 0);

    printf("Number of digits are  %d",count);
    return 0;
}