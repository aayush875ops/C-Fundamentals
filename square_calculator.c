#include<stdio.h>
int square(int n){

    int number = n * n;

    return number;
}
int main () {

int x;

printf("Enter the number\n");
scanf("%d",&x);

int result = square(x);

printf("Square = %d",result);

return 0;
}