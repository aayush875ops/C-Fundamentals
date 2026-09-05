#include<stdio.h>
int main(){
    int n;
   int isprime=1;

    printf("enter a number");
    scanf("%d",&n);

    if(n<=1){
        isprime=0;
    }
    else {

    for(int i=2;i*i<=n;i++){
        if( n % i ==0){
            isprime=0;
            break;
        }
    }

}
        if(isprime==1){
            printf(" %d is prime number",n);
        }

        else{
            printf(" %d is not prime number",n);
        }
        return 0;

    }
