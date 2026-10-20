#include<stdio.h>
int main(){

    int id,pass;
    int revenue=0;
    int upgrade=0;
    int visitors=0;
    

    scanf("%d",&id);

    while(id !=-1){
        
        int age_category;
         int rides;
         int price=0;
        int ticket=0;

        visitors++;

        scanf("%d %d %d",&age_category,&rides,&pass);

        if(age_category==1){
            price = 300;
        }else if(age_category==2){
            price = 500;
        }else if(age_category==3){
            price= 400;
        }
        if(rides>10){
            price = price - (price * 15)/100;
        }
        if(pass==1){
            price +=200;
            upgrade++;
        }
         if(age_category==3 && rides >12){
            price += 100;
            upgrade++;
        }
        
        revenue += price ;
        scanf("%d",&id);
        
    }
    
    printf("Total Revenue Collected: %d\n", revenue);
    printf("Total Visitors Processed: %d\n", visitors);
    printf("Total Premium Upgrades Count: %d\n", upgrade);
    return 0;
}