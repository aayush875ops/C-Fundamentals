#include<stdio.h>
int main(){
    int hours;
    int hourly_wage;

    printf("Enter the hour and hourly wage\n");
    scanf("%d %d",&hours,&hourly_wage);

    if(hours<0 || hourly_wage<=0){
        printf("Cant proceed with these number\n");
    }
    else{

    int total_wages = hours * hourly_wage;
    
    printf("Total wages = %d",total_wages);
    }
    return 0;
}