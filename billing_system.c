#include<stdio.h>

float bill(int item);

int main(){

   float result=0.0f;
    int item=0;

    printf("Enter the how many items purchased\n");
    scanf("%d",&item);

    if(item<=0){
        printf("Item input invalid\n");
    }
    else{

    result = bill(item);
    

    printf("Total Bill = %.2f\n",result);
    }

    return 0;

}

float bill(int item){

    float price;
    int quantity;

    int i;
    float total_bill=0.0f;
        
    for(i=1;i<=item;i++){
        printf("Item No is %d\n",i);
        printf("Enter the price\n");
        scanf("%f",&price);
        printf("Enter the quantity\n");
        scanf("%d",&quantity);

         total_bill += price * quantity;

    }
    return total_bill;
}