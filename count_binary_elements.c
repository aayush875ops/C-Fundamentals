
#include<stdio.h>
 void count(int number );



int main(){

    int number;

    printf("Enter the number\n");
    scanf("%d",&number);

    if(number<=0){
        printf("Enter valid input\n");
        return 0;
    }

    count(number);

   return 0;
}

void count(int number){

    int arr[number];
    int i;
     int count_zero=0;
    int count_one=0;

    printf("Enter 0 and 1 to count them in array\n");
    for(i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }


     for(i=0;i<number;i++){

        if(arr[i]==0){
            count_zero++;
        }
        else if(arr[i]==1){
           count_one++;
        }
    }

    printf("zero number counted = %d\n",count_zero);
    printf("One number counted = %d",count_one);

}