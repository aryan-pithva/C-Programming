#include <stdio.h>
#include <string.h>

int main(){
    char applicant_name[50];
    int applicant_age,cibil_score;
    float monthly_income;

    printf("Enter The Applicant Name: ");
    fgets(applicant_name,50,stdin);

    printf("Enter Applicant Age: ");
    scanf("%d", &applicant_age);

    printf("Enter Monthly Income: ");
    scanf("%f", &monthly_income);

    printf("Enter CIBIL Score: ");
    scanf("%d", &cibil_score);

    printf("\n\n");

    printf("-----------------Details-------------------\n");
    printf("Applicant Name: ");
    puts(applicant_name);
    printf("Applicant Age: %d\n", applicant_age);
    printf("Monthly Income: %.2f\n",monthly_income);
    printf("CIBIL Score: %d\n",cibil_score);
    
    //Eligibility Conditions
    if(applicant_age >=21 && applicant_age <=60){
        if(monthly_income >= 25000){
            if(cibil_score >= 700){
                printf("Loan Status: Approved\n");
            }
        }
    }
    else{
        printf("Loan Status: Rejected\n");
        printf("Reason:\n");
        if(applicant_age <21 || applicant_age > 60){
            printf("-Age Criteria Doesn't Satisfied.\n");
        }
        if(monthly_income < 25000){
            printf("-Low Monthly Income.\n");
        }
        if(cibil_score < 700){
            printf("-Poor CIBIL Score.\n");
        }
    }
  

    return 0;
}
