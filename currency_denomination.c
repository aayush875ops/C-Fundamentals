#include<stdio.h>
int main(){

    int amount;

    printf("Enter the amount\n");
    scanf("%d",&amount);

    if(amount <= 0 ){
        printf("Cant proceed with non-positive amount\n");
    }


    else{
        int temp = amount;

        int five_hundred = temp / 500;
        temp %= 500;

        int two_hundred = temp/ 200;
        temp %= 200;

        int hundred = temp / 100;
        temp %= 100;

        int fifty = temp / 50;
        temp %= 50;

        int twenty = temp / 20;
        temp %= 20;

        int ten = temp / 10;
         temp %= 10;

        printf("\n--- Currency Denomination Breakdown ---\n");
        printf("500 Notes : %d\n", five_hundred);
        printf("200 Notes : %d\n", two_hundred);
        printf("100 Notes : %d\n", hundred);
        printf(" 50 Notes : %d\n", fifty);
        printf(" 20 Notes : %d\n", twenty);
        printf(" 10 Notes : %d\n", ten);

        if(temp > 0){
            printf("Remaining amount < 10 : %d\n",temp);
        }
    }

    return 0;
}