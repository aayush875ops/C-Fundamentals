#include<stdio.h>
int main () {

    int number;
    int total=1;
    int count=0;

     printf("Enter the number( 0 to exit)\n");
     scanf("%d",&number);


     while(number !=0){
        if(number <0){
            printf("Invalid entries\n");
            printf("Product = %d\n",total);
            printf("Total entries = %d\n",count);
            
            return 0;
        }

        total *= number;
        count++;

         scanf("%d",&number);
     }
     

     printf("Product = %d\n",total);
     printf("Total entries = %d",count);

     return 0;
}