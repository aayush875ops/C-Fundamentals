#include<stdio.h>
int main(){

    int class_type;
    int fail_subject;
    int grace_marks;

    printf("Enter the class type and failed subjects\n");
    scanf("%d %d",&class_type,&fail_subject);

    switch (class_type){
    
    case 1:
    if(fail_subject<=3){
        grace_marks = fail_subject * 5;
        printf("Grace marks awarded = %d\n",grace_marks);
    }else{
        printf("Not grace marks awarded\n");
    }
    break;

    case 2:
    if(fail_subject <=2){
        grace_marks = fail_subject * 3;
        printf("Grace marks awarded = %d\n",grace_marks);
    }else{
        printf("Not grace marks awarded\n");
    }
    break;

    case 3:
    if(fail_subject==1){
        grace_marks = fail_subject * 2;
        printf("Grace marks awarded = %d\n",grace_marks);
    }
        else{
        printf("Not grace marks awarded\n");
    }
    break;

    default : 
    printf("Invalid class entered\n");
    
    break;
}
return 0;
}