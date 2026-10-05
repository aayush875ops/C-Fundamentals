#include<stdio.h>
int main(){

    int subject1;
    int subject2;
    int subject3;

    printf("Enter the marks for each subject\n");
    scanf("%d %d %d",&subject1,&subject2,&subject3);

    if(subject1 < 0 || subject2 < 0 || subject3 < 0){
        printf("Marks cannot be negative\n");
    }

    else{
        int total_marks = subject1 + subject2 + subject3;

        float average = total_marks / 3.0f;

        printf("Total = %d Average =%.2f",total_marks,average);
    }
    return 0;
}