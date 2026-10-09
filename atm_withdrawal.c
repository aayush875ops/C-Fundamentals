#include<stdio.h>
int main(){

    int amount;
    float balance;

    printf("Enter the amount\n");
    scanf("%d",&amount);

    printf("Enter the balance\n");
    scanf("%f",&balance);

    if(amount <=0 || balance <0){
        printf("Amount and balance cannot be negative\n");
        return 0;
    }
    else if (amount > balance){
        printf("amount cannot be greater than balance\n");
    }

    else if(amount % 100 !=0){
        printf("amount should be multiple of 100\n");
    }
    else {
        float b ;
        b=(float)amount;
        printf(" Balance %.2f - Amount %.2f = %.2f\n",balance,b,balance-amount);

        printf("withdrawal successful\n");
    }
   

    return 0;
}