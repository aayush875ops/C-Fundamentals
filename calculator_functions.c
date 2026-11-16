#include<stdio.h>
int add(int a , int b){
    int  sum = a+b;
    return sum;
}

int subtract(int a, int b){
    int subtraction = a-b;
    return subtraction;
}

int multiply(int a , int b){
    int multiplication = a*b;
    return multiplication;
}

int modulus( int a , int b){
  int modulo = a % b ;
  return modulo;
}

int division(int a , int b){
    int divide = a/b;
    return divide;
}


int main(){

    int result1 = add(10,5);
    int result2 = subtract(200,90);
    int result3 = multiply(100,10);
    

    int a = 20;
    int b = 0;

    if(b==0){
        printf("Modulus: Error (Division by zero)\n");
        printf(" Divison : Error cant proceed\n");
    }else{
        int result4 = modulus( a,b);
         int result5 = division( a,b);
        printf("modulus = %d\n", result4);
        printf("divison = %d\n", result5);
    }
   
    printf("Addition = %d\n", result1);
    printf("Subtraction = %d\n", result2);
    printf("Multiplication = %d\n", result3);
  

    return 0;
}