#include<stdio.h>
int main (){

    int price;
    int total=0;
    int count=0;
    int count_negative=0;

    printf("Enter the price ( -1 to exit)\n");
    scanf("%d",&price);

    while(price != -1){

        if(price < -1){
            count_negative++;
        }
        else if(price>500){
            count++;

        }
     if(price>=0){
            total += price;     
    }

    scanf("%d",&price);
}

printf("Total Expense = %d\n",total);
printf("Expense above 500 = %d\n",count);
printf("Invalid entries = %d",count_negative);

return 0;
}