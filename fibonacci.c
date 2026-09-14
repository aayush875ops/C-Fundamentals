#include<stdio.h>
int main(){

    int n;
    unsigned long long t1=0,t2=1,nextterm;

    printf("Enter the number\n");
    scanf("%d",&n);

    if(n<=0){
        printf("Error: cant proceed with the number less than 0.\n");
    }
        else{
            printf("Fibonacci of this number %d is\n",n);
            for(int i=1;i<=n;i++){
                printf(" %llu",t1);
                nextterm = t1 + t2;
                t1 = t2;
                t2 = nextterm;
            }
            printf("\n");
        }
    
        return 0;
    }
