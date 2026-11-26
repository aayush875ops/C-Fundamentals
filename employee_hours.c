#include<stdio.h>
int main(){

    int employee;
    int days;
    int daily_hours;
    int total_hour;
    int i,j;

    printf("Enter the employee\n");
    scanf("%d",&employee);

    printf("Enter the days\n");
    scanf("%d",&days);

    for(i=1;i<=employee;i++){

         total_hour=0;

    for(j=1;j<=days;j++){
          scanf("%d",&daily_hours);
        total_hour += daily_hours;
    }

        if(total_hour>=40){
            printf("Employee %d: Total Hours = %d, Target Completed\n",i,total_hour);
        }
        else {
             printf("Employee %d: Total Hours = %d, Target Not Completed\n",i,total_hour);
        }
}

    
return 0;
}