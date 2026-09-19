#include<stdio.h>
int main(){
    int number;
     
    printf("Enter the number\n");
    scanf("%d",&number);

    while(number < 100 || number > 999){
        printf("Error cant proceed with these digits");
            scanf("%d",&number);
    }

    int a = number / 100;
    int b = (number / 10) %10;
    int c = number % 10;

    printf("%d %d %d",a,b,c);

    return 0;

        }