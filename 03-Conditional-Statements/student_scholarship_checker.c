#include <stdio.h>

int main(){
    char student_name[50];
    long enrollment_number;
    int semester;
    float cgpa,annual_family_income;


    printf("Enter Student Name: ");
    fgets(student_name,50,stdin);

    printf("Enter Enrollment Number: ");
    scanf("%ld", &enrollment_number);

    printf("Enter Semester: ");
    scanf("%d", &semester);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter Family Annual Income: ");
    scanf("%f", &annual_family_income);

    printf("\n\n");

    //conditions and validations

    if(semester <=0){
        printf("Invalid Semester...\n");
        return 0;
    }
    else if(cgpa < 0  || cgpa > 10){
        printf("Invalid CGPA...\n");
        return 0;
    }
    else if(annual_family_income <= 0){
        printf("Enter Valid Income...\n");
        return 0;
    }
    
    printf("---------------Details----------------\n");
    printf("Student Name: ");
    puts(student_name);
    printf("Enrollment Number: %ld\n",enrollment_number);
    printf("Semester: %d\n",semester);
    printf("CGPA: %.2f\n",cgpa);
    printf("Annual Family Income: %.2f\n",annual_family_income);

    if(cgpa >= 9.00 && annual_family_income <=300000.00){
        printf("Scholarship Status: Full Scholarship.\n");
    }
    else if(cgpa >=8.00 && annual_family_income <=500000.00){
        printf("Scholarship Status: Half Scholarship.\n");
    }
    else if(cgpa >= 7.00 && annual_family_income <= 800000.00){
        printf("Scholarship Status: Quarter Scholarship.\n");
    }
    else{
        printf("Scholarship Status: Not Eligible.\n");
    }

    if(cgpa >= 9.8){
        printf("Outstanding Academic Performance!\n");
    }
    printf("---------------------------------------");

    return 0;
}
