#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int size;

int arr[MAX_SIZE];
    printf("Enter the size for array between 1-%d\n",MAX_SIZE);
    scanf("%d",&size);

    if(size <= 0 ||  MAX_SIZE < size ){
        printf("Cant proceed with  this size\n");
    }

    else{
        printf("Enter the array\n");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        int sum =0;
        for(int i =0;i<size;i++){
        sum += arr[i];
        }
        printf("Sum = %d\n",sum);
        

        // explicit casting
        float average = (float)sum / size;

        printf("Average = %.2f",average);
        }
            return 0;
        }
        
