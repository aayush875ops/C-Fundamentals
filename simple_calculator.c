#include<stdio.h>
int main(){
    int a,b;
    char op;
    float result;

    printf(" Enter the number");
    scanf("%d %d",&a,&b);

    printf(" Enter the operator ( +,-,*,/)");
    scanf(" %c",&op);

    if(op=='+'){
        result=a+b;
    }
    else if(op=='-'){
        result=a-b;
    }
    else if(op=='*'){
        result=a*b;
    }
    else if(op=='/'){
        if(b==0){
            printf("Error: Division by zero is not allowed.\n");
            return 0;
        }
        result=(float)a/b;
    }
    else{
        printf("Invalid operator\n");
        return 0;
    }
    printf("%.2f",result);
    return 0;
}