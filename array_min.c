#include<stdio.h>
int main(){
    int arr[5];int n=5;
    int i;
    printf("enter the array");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
    int min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf(" minimum array is %d\n",min);
    return 0;
}