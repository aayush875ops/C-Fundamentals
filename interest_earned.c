#include<stdio.h>
int main(){
    float principal;
    float amount_received;


 printf("Enter the principal amount\n");
scanf("%f",&principal);


printf("Enter the received amount\n");
scanf("%f",&amount_received);

if(principal < 0 || amount_received < 0){
    printf("Cant proceed with this amount\n");
}

else{
    float total_interest= amount_received - principal;

    printf("Total interest earned = %.2f",total_interest);
}
return 0;


}