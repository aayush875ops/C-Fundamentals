#include<stdio.h>
int main(){

    int marks;
    float average;
    int count=0;
    int total =0;

    printf("Enter the marks\n");
    scanf("%d",&marks);

    if(marks==0 || marks >100){
        printf("Cant calculate average\n");
        return 0;
    }
    else{
        while(marks!=-1){
            

           total+=marks;
            count++;

            printf("Enter (-1 to exit)\n");
            scanf("%d",&marks);
        }
    if(count>0){
        average = (float)total / (float)count;
        printf("Total marks = %d\n",total);
        printf("Total Count = %d\n",count);
        printf("Average = %.2f",average);
    }
    
    }
        return 0;
    
}