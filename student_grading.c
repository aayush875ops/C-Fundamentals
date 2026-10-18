#include<stdio.h>
int main(){


    int marks;

    printf("Enter the marks\n");
    scanf("%d",&marks);

if(marks <0 || marks >100){
    printf("Enter the valid marks\n");
    return 0;
}

if(marks>=75 && marks <=100){
    printf("Distinction\n");
}
else if( marks >40 && marks <75){
    printf("Pass\n");
}
else if( marks >=0 && marks <=40){
    printf("Fail\n");
}
return 0;

}