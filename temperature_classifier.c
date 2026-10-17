#include<stdio.h>
int main(){

    int temperature;

    printf("Enter the temperature\n");
    scanf("%d",&temperature);

    if(temperature <0){
        printf("Freezing\n");
    }
    else if(temperature >= 0 && temperature <=15){
        printf("Very Cold\n");
    }
    else if(temperature >=16 && temperature <=25){
        printf("Cold\n");
    }
    else if(temperature >=26 && temperature <=35){
        printf("Pleasant\n");
    }
    else if(temperature >=36 && temperature <=45){
        printf("Hot\n");
    }
    else if(temperature>45){
        printf("Extreme Heat\n");
    }
    return 0;
}