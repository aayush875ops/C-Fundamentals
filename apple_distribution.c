#include<stdio.h>
int main(){

    int number_students;
    int number_apples;

    printf("Enter the number of students\n");
    scanf("%d",&number_students);

    printf("Enter the number of apples\n");
    scanf("%d",&number_apples);

    

    if(number_students <= 0 || number_apples <= 0){
        printf("Cant proceed with this digits\n");
    }
    
    else {

    int equal_distribution = number_apples / number_students;
    int remaining = number_apples  % number_students;
    

printf(" Equally distributed per student are = %d\n Remaining apples are =%d",equal_distribution,remaining);
    }
return 0;
}
