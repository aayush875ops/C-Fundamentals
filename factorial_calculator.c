#include<stdio.h>
unsigned long long factorial(int n){

    
    if(n<0){
        printf("Error: Factorial of negative number cannot proceed\n");
        return 0;
    }
    unsigned long long factorial =1;

    for(int i =1 ; i<=n ; i++){

        factorial*= i;
    }

    return factorial;
    
}
int main (){

    unsigned long long result = factorial(5);

    printf("Factorial = %llu\n",result);

    return 0;
}