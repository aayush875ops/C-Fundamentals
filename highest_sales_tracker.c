#include<stdio.h>
int main(){

    int  amount;
    int large=0;

    printf("Enter the valid amount\n");
    scanf("%d",&amount);


    

    while(amount!=-1){

        if(amount <=0){
            printf("Amount should be non-negative\n");
            printf("Highest sales = %d",large);
            return 0;
        }

        else{
            if(large < amount){
                large = amount;
            }
        }
        printf("Enter the ( -1 to exit)\n");
        scanf("%d",&amount);
    }
    printf("Highest sales = %d",large);
    return 0;
}