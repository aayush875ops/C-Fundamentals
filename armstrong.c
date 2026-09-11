#include<stdio.h>
int main(){
    int number=153;
    int originalnum=number;
    int temp,remainder,digits=0,sum=0;

    temp=number;
    do{
        digits++;
        temp /= 10;

    }while(temp !=0);

    temp=number;
    while(temp >0){
        remainder=temp % 10;

        int term=1;
        for(int i=0;i<digits;i++){
            term *= remainder;
        }
        sum +=term;
        temp /=10;
    }
    if(sum==originalnum){
        printf("%d is armstrong number\n",originalnum);
    }
    else{
            printf("%d is not an armstrong number\n",originalnum);
        }

    
    return 0;
}