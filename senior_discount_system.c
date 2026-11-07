#include<stdio.h>
int main () {
    int units;
    int citizen;

    printf("Enter the units\n");
    scanf("%d",&units);

    if(units>200){
        printf("Is the customer a senior citizen? (1 for yes , 0 for no)\n");
        scanf("%d",&citizen);
        
        if(citizen==1){
            printf("Senior Citizen discount applicable\n");
        }
        else if(citizen==0){
            printf("No discount\n");
        }else{
            printf("irrelevant input\n");
        }
    }
    else {
        printf("Normal billing\n");
    }

    return 0;
}