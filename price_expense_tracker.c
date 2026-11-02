#include<stdio.h>
int main(){

    int price;
    int total=0;
    int count_price=0;
    int invalid_entries=0;

    printf("Enter the price (-1 to exit)\n");
    scanf("%d",&price);

    while(price!=-1){

        if(price <-1 || price == 0){
            invalid_entries++;
             printf("Invalid entries =%d\n",invalid_entries);
            return 0;
        }
         else if(price > 500){
            count_price++;
        }
        total += price;
        scanf("%d",&price);
    }
    printf("Total expense = %d\n",total);
    printf("Invalid entries = %d\n",invalid_entries);
    printf("Expense above 500 = %d\n",count_price);
    return 0;
}