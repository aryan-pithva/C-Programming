#include <stdio.h>

int main(){
    char student_name[20];
    long enrollment_number;
    int age;
    char branch[20];
    int current_semester;

    printf("Enter Student Name: ");
    scanf("%s", student_name);

    printf("Enter Enrollment Number: ");
    scanf("%ld",&enrollment_number);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Branch: ");
    scanf("%s", branch);

    printf("Enter Current Semester: ");
    scanf("%d", &current_semester);
    printf("\n\n");

    printf("---------------------Student Information------------------\n");
    printf("Student Name: %s\n",student_name );
    printf("Enrollment Number: %ld\n", enrollment_number);
    printf("Age: %d\n", age);
    printf("Branch: %s\n", branch);
    printf("Current Semester: %d\n",current_semester);

    return 0;
}
