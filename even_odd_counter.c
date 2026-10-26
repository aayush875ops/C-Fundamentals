#include<stdio.h>
int main(){

    int number;
    int count_even=0;
    int count_odd=0;

    printf("Enter the number\n");
    scanf("%d",&number);

    if(number <0){
        printf("Enter the positive numbers\n");
        return 0;
    }

    while(number!=0){
         if(number <0){
        printf("Enter the positive numbers\n");
        return 0;
         }

        if(number % 2==0){
        count_even++;
        printf("Even numbers entered are = %d\n",count_even);
    
    }
    else{
        count_odd++;
        printf("Odd numbers entered are = %d\n",count_odd);
    }
        scanf("%d",&number);

}
    printf("\nFinal Summary:\n");
    printf("Total Even Numbers Entered = %d\n", count_even);
    printf("Total Odd Numbers Entered = %d\n", count_odd);
return 0;
}