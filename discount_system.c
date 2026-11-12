#include<stdio.h>
int main(){

    int amount;
    int membership;
    int discount=0;
    int total=0;

    printf("Enter the amount\n");
    scanf("%d",&amount);

    total = amount;

    if(amount>=2000){
        printf("Enter the membership status (1 for member , 0 for non-member)\n");
        scanf("%d",&membership);

        if(membership==1){
            printf("20%% discount\n");
            discount = amount * 0.20;
            total = amount - discount;
        }
        else if(membership==0){
            printf("No member\n");
        }
        else{
            printf("Invalid input\n");
        }
    }
    else if(amount<2000){
        printf("No discount\n");
    }

    printf("Discount = %d\n",discount);
    printf("Total = %d",total);

    return 0;
}