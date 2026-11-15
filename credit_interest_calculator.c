#include<stdio.h>
int main (){

    int score;

    printf("Enter the score\n");
    scanf("%d",&score);

    if(score>=800 && score<=900){
        printf("Interest id 7%%\n");
    }
    else if(score>=750 && score<=799){
        printf("Interest id 8%%\n");
    }
    else if(score>=700 && score<=749){
        printf("Interest id 9%%\n");
    }
    else if(score>=650 && score<=699){
        printf("Interest id 10%%\n");
    }
    else if(score>0 && score<650){
    printf("Interest id 12%%\n");
    }
    else{
        printf("invalid input\n");
    }

    return 0;
}