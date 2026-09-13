#include<stdio.h>
int main(){
    int a,b;

    printf("Enter the number a and b\n");
    scanf("%d %d",&a,&b);

    printf("Before swap a = %d  and b = %d\n",a,b);

    a = a + b; // Holds sum (a + b)
    b = a - b; // b gets original value of a
    a = a - b; // a gets original value of b

    printf("After swap a = %d and b = %d",a,b);
    return 0;
}