
#include<stdio.h>
void prime(int a , int b){

    for(int i = a ; i<= b ; i++){
        if( i < 2){
            printf("%d is not prime\n",i);
            continue;
        }

        int isprime=1;

        for(int j = 2 ; j * j <= i ; j++){

            if(i % j ==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf(" %d is prime\n",i);
        }else{
            printf("%d is not prime\n",i);
        }
    }
        
    }
int main(){

    int a ,b;

    printf("Enter the number\n");
    scanf("%d %d",&a,&b);

    prime(a,b);

    return 0;
}