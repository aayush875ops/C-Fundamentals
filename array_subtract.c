#include<stdio.h>
int main(){
    int arr[5];
    int n=5;
    int i;
    printf("enter the number\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int subtract=arr[0];
    for(i=1;i<n;i++){
    subtract -=arr[i];
    }
    printf(" subtract is %d",subtract);
    return 0;
}
