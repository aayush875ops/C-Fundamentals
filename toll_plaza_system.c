#include<stdio.h>
int main(){

    int vehicletype;
    int speed;
    int axles;
    int total_toll=0;
    int violation=0;

    printf("Enter vehicle type (-1 to exit): ");
    scanf("%d",&vehicletype);

    while(vehicletype !=-1){
        printf("Enter speed and number of axles: ");
        scanf("%d %d",&speed,&axles);
        int fine=0;
        int toll=0;

        if(vehicletype==1){
            toll =50;
        }else if(vehicletype==2){
            toll=100;
        }else if(vehicletype==3){
            toll=150;
        }
        if(speed >80 && speed <=100){
            fine +=200;
            violation++;
        }else if(speed>100) {
            fine +=500;
            violation++;
        }
        if(vehicletype==3 && axles <4 ){
            fine +=300;
            violation++;
        }
          total_toll +=(toll + fine);

          printf("Enter vehicle type (-1 to exit): ");
          scanf("%d",&vehicletype);
    }

    printf("Total toll collected = %d\n",total_toll);
    printf(" Total violations = %d\n",violation);
    return 0;
}