#include<stdio.h>
int main(){
    int count=0;
    printf("Prime number between 2 and 50:\n");
    for(int n =2; n<=50;n++){
        int isprime=1;


        for(int i=2;i*i <=n;i++){
            if( n % i ==0){
                isprime=0;
                break;
                
            }
             
        }
        if(isprime==1){
            printf("%d ",n);
            count++;
        }
    }
    printf("\nNumber of prime numbers is %d\n",count);
    return 0;
}