#include<stdio.h>
int main(){

    int cost;
    float total_price;

    printf("Calculating total_price after 18 percent GSt\n");

    printf("Enter the cost\n");
    scanf("%d",&cost);
    
    
    while(cost < 0 ) {
        printf("cost cannot be in negative\n");
        scanf("%d",&cost);
    }

      
    
     total_price = cost + ( cost * 18.0f / 100.0f);

      printf("So after 18 percent GSt the price is %.2f",total_price);
    
      return 0;

}