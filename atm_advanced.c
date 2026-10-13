#include<stdio.h>
int main(){

    int balance,amount;

    printf("Enter the balnce\n");
    scanf("%d",&balance);

    printf("Enter the amount\n");
    scanf("%d",&amount);

    if(amount <=0 || balance < amount){
        printf("Amount cannot be negative and cant be greater than balance\n");
        return 0;
    }

    if(amount % 100 !=0){
        printf("Amount  should be multiple of 100\n");
    }
      else if((balance-amount) < 500){
        printf("Balance should at least 500 or greater after withdrawal\n");
      }
      else {
        balance -= amount;
        printf("Withdraw successful\nBalance = %d\n", balance);
    }

      return 0;
}