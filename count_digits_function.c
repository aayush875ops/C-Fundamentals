#include<stdio.h>
 
int count_digits(int number);

int main(){

    int number;

    printf("Enter the number\n");
    scanf("%d",&number);

    int result = count_digits(number);

    printf(" Counted Numbers  are = %d",result);

    return 0;
}

int count_digits(int number){

    int count=0;

    do{
        count++;

        number /=10;
    }while(number!=0);

    return count;
}