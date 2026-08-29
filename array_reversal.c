#include<stdio.h>
int main(){
    int arr[]={10382,20345,40567,60463,70568};
    int n =sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right = n-1;
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(int i =0;i<n;i++){
        printf(" %d",arr[i]);

    }
    return 0;

    }
