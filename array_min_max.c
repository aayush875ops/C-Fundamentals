#include<stdio.h>
#define MAX_SIZE 100
int main(){

    int size;

    printf("Enter the size  between 1-%d\n",MAX_SIZE);
    scanf("%d",&size);

    if(size <= 0  || MAX_SIZE < size){
        printf("Cant proceed with the number\n");

    }

    else{
        int arr[MAX_SIZE];

        printf("Enter the array\n");
        for(int i =0 ; i < size ;i++){
            scanf("%d",&arr[i]);
        }

        int max = arr[0];
        int min = arr[0];

        for(int i=1;i < size;i++){
            if(max < arr[i]){
                max = arr[i];
            }

            if(min > arr[i]){
                min = arr[i];
            }
        }

        printf("Maximum = %d\n",max);
        printf("Minimum = %d\n",min);
    }
    return 0;

}