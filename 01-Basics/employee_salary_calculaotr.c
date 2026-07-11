#include <stdio.h>

int main(){
    char employee_name[20];
    int employee_id;
    float basic_salary;

    printf("Enter Employee Name: ");
    scanf("%s", employee_name);
    
    printf("Enter Employee ID: ");
    scanf("%d", &employee_id);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    float HRA = basic_salary * 0.2;
    float DA = basic_salary * 0.1;
    float gross_salary = HRA + DA + basic_salary;

    printf("\n\n");
    printf("---------------Employee Information------------------\n");
    printf("Employee Name: %s\n",employee_name);
    printf("Employee ID: %d\n",employee_id);
    printf("Basic Salary: %.2f\n",basic_salary);
    printf("HRA: %.2f\n",HRA);
    printf("DA: %.2f\n",DA);
    printf("Gross Salary: %.2f\n",gross_salary);

    return 0;
}
