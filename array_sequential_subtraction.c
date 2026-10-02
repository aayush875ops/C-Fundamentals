#include<stdio.h>
#define MAX_SIZE 100

int main(){

    int size;

    printf("Enter the size from 1-%d\n",MAX_SIZE);
    scanf("%d",&size);

    if(size <=0 || size > MAX_SIZE){
        printf("Cant proceed with the negative\n");

    }

    else{
        int arr[MAX_SIZE];

        printf("Enter the numbers for array\n");
        for(int i =0;i< size;i++){

        scanf("%d",&arr[i]);}

        int subtract = arr[0];
        for(int i=1;i<size;i++){
            subtract -=arr[i];
        }
            printf("Subtraction = %d",subtract);

        
    }
    return 0;
    
}