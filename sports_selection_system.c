#include<stdio.h>
int main (){

    int age;
    int result;
    int score;

    printf("Enter the age\n");
    scanf("%d",&age);

    if(age>=18){
        printf("Enter the fitness result (1 for pass , 0 for fail)\n");
        scanf("%d",&result);

        if(result==1){
            printf("Enter the batting score\n");
            scanf("%d",&score);
            if(score>=50){
                printf("Selected\n");
            }
            else{
                printf("Not selected\n");
            }
        }
        else if(result==0){
            printf("Failed\n");
        }
        else{
            printf("undefined input\n");
        }
    }
    else{
        printf("Age required  atleast 18\n");
    }

    return 0;

}