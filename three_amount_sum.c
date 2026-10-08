#include<stdio.h>
int main(){

    int amount1;
    int amount2;
    int amount3;

    printf("Enter the  three amount\n");
    scanf("%d %d %d",&amount1,&amount2,&amount3);

    if(amount1 < 0  || amount2 < 0 || amount3 < 0){
        printf("Cant proceed with the negative amount\n");
    }

    else{
        int total_amount = amount1 + amount2 + amount3; 
    
        printf("Total amount = %d",total_amount);
    }
    return 0;
}