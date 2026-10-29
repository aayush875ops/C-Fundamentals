#include<stdio.h>
int main(){

    int number;
    int total=1;
    int count=0;

    printf("Enter the number\n");
    scanf("%d",&number);

    while(number!=0){

        if(number<0){
            printf("Enter positive numbers\n");
            printf("Total = %d\n",total);
             printf("Count = %d\n",count);
            return 0;
        }
        else{

            total *= number;
            count++;
        }
        scanf("%d",&number);
    }
    printf("Total = %d\n",total);
    printf("Count = %d",count);
    return 0;
}