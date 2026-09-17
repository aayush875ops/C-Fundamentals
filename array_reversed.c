#include<stdio.h>
int main(){
    int arr[]={10,30,50,60,40,70,90};
    int n=sizeof(arr)/sizeof(arr[0]);

    int left=0;
    int right = n-1;

    printf("Original array\n");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);

    }

    while(left<right){

        int temp = arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    printf("\nReversed array\n");
    for(int i= 0 ; i < n ; i++){
    printf(" %d",arr[i]);
    }

return 0;


}