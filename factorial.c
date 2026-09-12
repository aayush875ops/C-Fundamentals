#include<stdio.h>
int main(){
    int n;

    unsigned long long factorial=1;

    printf("Enter the number");
    scanf("%d",&n);
    
    
    if(n < 0){
        printf("Error: Factorial of a negative number does not exist.\n");
    }
      else{
      for(int i=1;i<=n;i++){
        factorial *= i;

      }
    
      printf(" factorial of this value %d = %llu\n",n,factorial);
    }
      return 0;

    }
