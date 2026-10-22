#include<stdio.h>
int main(){

    int subject;
    int sum=0;

    printf("Enter the subject\n");
    scanf("%d",&subject);

    while(subject !=0){
        int marks;

        scanf("%d",&marks);
        sum +=marks;

        printf("Enter the  ( 0 to exit)\n");
        scanf("%d",&subject);


    }
    printf("Sum = %d",sum);
    return 0;
}