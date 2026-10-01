#include<stdio.h>
int main(){
    int gb;
    int mb;


    printf("Enter the size in Gigabytes\n");
    scanf("%d",&gb);

    if(gb < 0 ){
        printf("Cant proceed with negative number\n");
    }

    else{
        mb = gb * 1024;

        printf("MB are =%d",mb);
    }
    return 0;
}