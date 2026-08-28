#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={10038,9583,9540,5859,7855};
    int n =sizeof(arr)/sizeof(arr[0]);
    int largest= INT_MIN;int second_largest=INT_MIN;
    for(int i =0; i< n; i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
            
        }
    }
    printf(" 2nd largest %d\n",second_largest);
    return 0;
}
