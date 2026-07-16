#include<stdio.h>

int main(){
    char taxpayer_name[50];
    char pan_number[20]; 
    float annual_income,tax_rate,tax_amount,net_income;

    printf("Enter Tax Payer's Name: ");
    fgets(taxpayer_name,50,stdin);

    printf("Enter Pan Number: ");
    scanf("%s", pan_number);

    printf("Enter Annual Income: ");
    scanf("%f", &annual_income);

    printf("\n\n");

    //Conditions

    if(annual_income < 0){
        printf("Enter Valid Annual Income...");
    }

    else if(annual_income <= 400000){
        tax_rate = 0.0;
        tax_amount = annual_income * tax_rate/100;
        net_income = annual_income - tax_amount;
    }
    else if(annual_income >400000 && annual_income <= 800000){
        tax_rate = 10.0;
        tax_amount = annual_income * tax_rate/100;
        net_income = annual_income - tax_amount;
    }
    else if(annual_income > 800000 && annual_income <= 1200000){
        tax_rate = 20.0;
        tax_amount = annual_income * tax_rate/100;
        net_income = annual_income - tax_amount;
    }
    else if(annual_income > 1200000){
        tax_rate = 30.0;
        tax_amount = annual_income * tax_rate/100;
        net_income = annual_income - tax_amount;
    }

    printf("--------------Tax------------\n");
    printf("Name: ");
    puts(taxpayer_name);
    printf("PAN Number: %s\n", pan_number);
    printf("Annual Income: %.2f\n", annual_income);
    printf("Tax Rate: %.2f\n",tax_rate);
    printf("Tax Amount: %.2f\n",tax_amount);
    printf("Net Income: %.2f\n",net_income);

    if(annual_income > 2500000){
        printf("High Income Taxpayer...\n");
    }
    else{
        printf("Standard Taxpayer...\n");
    }
    printf("--------------------------------\n");
    return 0;
}
