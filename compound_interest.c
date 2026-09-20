#include<stdio.h>
#include<math.h>
int main(){
    float compound_interest;
    float principal,rate,time;

    printf("Enter the principal\n");
    scanf("%f",&principal);

    printf("Enter the rate\n");
    scanf("%f",&rate);

    printf("Enter the time\n");
    scanf("%f",&time);

    if(principal < 0 || rate < 0 || time < 0){
        printf("Error: cant proceed with negative numbers\n");
    }

    else  {
        compound_interest = (principal * pow((1.0f + rate / 100.0f),time))-principal;

        printf("compound interest is = %.2f",compound_interest);
    }
    return 0;


}