#include <stdio.h>

int main(){
    char patient_name[50];
    int patient_age, number_of_days_admitted,room_type;
    float original_bill, discount, final_bill;

    printf("Enter The Name: ");
    fgets(patient_name,50,stdin);

    printf("Enter The Age: ");
    scanf("%d", &patient_age);

    printf("Enter The Number Of Days Admitted: ");
    scanf("%d", &number_of_days_admitted);

    printf(" Room Type: \n");
    printf("1. General Ward (1500 INR/day) \n");
    printf("2. Semi-Private Room (3000 INR/day) \n");
    printf("3. Private Room (5000 INR/day) \n");
    printf("Enter: ");
    scanf("%d", &room_type);
    printf("\n\n");

    if(room_type == 1){
        original_bill = number_of_days_admitted * 1500;
    }
    else if(room_type == 2){
        original_bill = number_of_days_admitted * 3000;
    }
    else if(room_type == 3){
        original_bill = number_of_days_admitted * 5000;
    }
    else{
        printf("Invalid Input.");
    }
    printf("----------------Bill------------\n");
    printf("Patient Name: ");
    puts(patient_name);
    printf("Patient Age: %d\n",patient_age);
    printf("Room Type: %d\n", room_type);
    printf("Days Stayed: %d\n",number_of_days_admitted);
    printf("Original Bill: %.2f\n",original_bill);

    if(patient_age < 5){
        discount = original_bill;
        final_bill = 0;
    }
    else if(patient_age >=65){
        discount = original_bill * 0.2;
        final_bill = original_bill - discount;
    }
    else if(patient_age >= 5 && patient_age <65){
        discount = 0;
        final_bill = original_bill;
    }
    printf("Discount: %.2f \n",discount);
    printf("Final Amount: %.2f\n",final_bill);

    if(number_of_days_admitted > 10){
        printf("Long-Term Patient.\n");
    }
    else{
        printf("Short-Term Patient.\n");
    }


    return 0;
}
