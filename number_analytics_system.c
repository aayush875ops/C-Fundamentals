#include<stdio.h>
int main(){

    int number;
    int large =0;
    int count_number=0;
    int count_negative=0;
    int total=0;
    int count_divisble =0;

    printf("Enter the number (-999 to exit)\n");
    scanf("%d",&number);


    while(number!=-999){

        count_number++;


        if(number >= 0 ){
            total += number;
        }
        if(number < 0){
            count_negative++;
        }
        if(number % 2 ==0 || number % 3 ==0){
            count_divisble++;
        }
        if(number > large){
            large = number;
        }

        scanf("%d",&number);

    }
    if(number==-999){
        count_negative++;
    }

    printf("Negative numbers = %d\n",count_negative);
    printf("Sum of positive number = %d\n",total);
    printf("Number of digit divisble by 2 and 3 = %d\n",count_divisble);
    printf("Largest Number = %d\n",large);
    printf("Total Number = %d\n",count_number);

    return 0;
}