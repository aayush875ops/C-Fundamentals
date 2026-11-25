#include<stdio.h>

void fibonacci(int number);

int main(){

    int number;

    printf("Enter the number\n");
    scanf("%d",&number);
    if(number<=0){
        printf("Error enter valid input\n");
        return 0;
    }

    fibonacci(number);
    printf("\n");

    return 0;

}

void fibonacci(int number){

    int a=0,b=1,c;
    int i;

    for(i=0;i<number;i++){
        printf(" %d",a);

        c= a+b;
        a=b;
        b=c;
    }


}