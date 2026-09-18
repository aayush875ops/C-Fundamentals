#include<stdio.h>
int main(){
    int days;
    int remaining_days;
    int weeks;

    printf("Enter the days");
    scanf("%d",&days);
    
    if(days<0){
        printf("Error cant proceed\n");
    }
    else {

    weeks =  days / 7;
    remaining_days = days % 7;

    printf("weeks = %d and remaining days = %d",weeks,remaining_days);
    }
    return 0;
}