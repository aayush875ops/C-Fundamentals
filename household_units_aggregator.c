#include<stdio.h>
int main(){

    int units;
    int total=0;
    int household=0;

    printf("Enter the units\n");
    scanf("%d",&units);

    while(units!=-1){

        if(units<0){
            printf("enter valid units\n");
            printf("Total Bill = %d\n",total);
             printf("Households = %d",household);
            return 0;
        }
        else {

            total += units;
            household++;

        }
        scanf("%d",&units);
    }
    printf("Total Bill = %d\n",total);
    printf("Households = %d",household);
    return 0;
}