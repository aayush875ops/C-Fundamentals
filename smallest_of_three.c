#include<stdio.h>
int main(){

    int a,b,c;

    printf("Enter the number of your choice\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a < 0 || b < 0 || c < 0 ){
        printf("Cant proceed with negative digits\n");
    }
    
    else{
        if(a <= b && a <= c ){
            printf("A is the smallest digit\n");
        }
        
        else if(b <= a && b <= c ){
            printf("B is the smallest digit\n");
        }
        else{
            printf("C is the smallest digit");
        }
    }

    return 0;
}