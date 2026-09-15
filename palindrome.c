#include<stdio.h>
int main(){
    int number;
    int remainder;
    int originalnum;
    int reversed=0;

    printf("Enter the number of your choice");
    scanf("%d",&number);

    if(number  < 0){
        printf("Number should not be in minus");}
        else{
            originalnum=number;
        
        
    while(number != 0){
        remainder= number  % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    
    if(originalnum==reversed){
        printf("The number %d is palindrome %d",originalnum,reversed);
    }
    else{
        printf("The number %d is not palindrome",originalnum);
    }
}
    return 0;
}