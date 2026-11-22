
#include<stdio.h>

int checknumber(int number);

int main(){

    int number;

    printf("Enter the number\n");
    scanf("%d",&number);

    int result= checknumber(number);

    printf("Symbol: Positive ( return 1) , Negative ( return -1), Zero (return 0)\n");

    printf("return = %d",result);
    

    return 0;
}

int checknumber(int number){

    if(number<0){
        return -1;
    }
    else if(number==0){
        return 0;
    }
    else{
        return 1;
    }
}