#include<stdio.h>
int main(){
    int length,breadth,area;

    printf("enter the length and breadth \n");
    scanf("%d  %d",&length,&breadth);

    area= length * breadth;

    printf(" area of rectangle is %d",area);
    return 0;
    
}