#include<stdio.h>
int main(){

    int number;
    int readings;
    int count=0;

    printf("enter the numbers\n");
    scanf("%d",&number);
    while(number!=-1){
        scanf("%d",&readings);
        if(readings==0||readings<=0){
            printf("negative  and zero readings will not count\n");
        }else{
            count++;
        }
        printf("Enter the number ( -1 to exit)\n");
        scanf("%d",&number);    }

        printf("Total positive readings = %d",count);
        return 0;
}