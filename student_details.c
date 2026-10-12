#include <stdio.h>

int main() {
    char name[50];
    int student_class;
    int roll_no;

    printf("Enter the name\n");
    scanf("%s", name);

    printf("Enter the class\n");
    scanf("%d", &student_class);

    printf("Enter the roll no\n");
    scanf("%d", &roll_no);

    // Guard clause for invalid class or roll number
    if (student_class < 0 || roll_no <= 0) {
        printf("Class and roll no cannot be negative\n");
        return 0;
    } else {
        printf("\n-----Student Details---\n");
        printf("Name = %s\n", name);
        printf("Class = %d\n", student_class);
        printf("Roll no = %d\n", roll_no);
    }

    return 0;
}