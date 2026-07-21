#include <stdio.h>

int main(){
    int num_of_students = 0;
    
    printf("Enter The Number Of Students: ");
    scanf("%d", &num_of_students);
    
    if(num_of_students <=0){
        printf("Please Enter Valid Integer..\n");
        return 0;
    }

    int student[num_of_students];


    for(int i = 0; i< num_of_students; i++){
        printf("Enter The Marks of Student %d: ", i+1);
        scanf("%d", &student[i]);
        if(student[i] < 0 || student[i] >100){
            printf("Please Enter Valid Marks...\n");
            return 0;
        }
    }
    int high_marks = student[0];
    int low_marks = student[0];
    int total_marks = 0;
    float average = 0.00;
    int pass_count = 0, fail_count =0;
    int A=0,B=0,C=0,D=0,F = 0;
    
    printf("----------------------------------\n\n");

    printf("Marks:\n");
    for(int i = 0; i <num_of_students; i++){
        printf("%d\t", student[i]);
        if(student[i] > high_marks){
            high_marks = student[i];
        }
        if(student[i] < low_marks){
            low_marks = student[i];
        }
        total_marks += student[i];
        average = (float) total_marks / num_of_students;

        if(student[i] >=35){
            pass_count++;
        }
        else{
            fail_count++;
        }

        if(student[i] >= 90 && student[i] <= 100){
            A++;
        }
        else if(student[i] >= 75 && student[i] < 90){
            B++;
        }
        else if(student[i] >= 50 && student[i] < 75){
            C++;
        }
        else if(student[i] >= 35 && student[i] < 50){
            D++;
        }
        else{
            F++;
        }
    }
    printf("\n");
    printf("Highest Marks: %d\n", high_marks);
    printf("Lowest Marks: %d\n", low_marks);
    printf("Total Marks: %d\n", total_marks);
    printf("Average Marks: %.2f\n", average);
    printf("Pass Students: %d\n", pass_count);
    printf("Fail Students: %d\n", fail_count);
    printf("A Grade: %d\n", A);
    printf("B Grade: %d\n", B);
    printf("C Grade: %d\n", C);
    printf("D Grade: %d\n", D);
    printf("F Grade: %d\n", F);
    printf("----------------------------------------------\n");
    

    return 0;
}
