#include<stdio.h>
int main(){
    int arr[]={100,340,650,700,798,876};
    int n =sizeof(arr)/sizeof(arr[0]);
   int  max=arr[0];
    for(int i =1 ; i<n; i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
        printf("Maximum number is %d\n",max);
        return 0;
    
}