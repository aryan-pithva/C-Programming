#include <stdio.h>

int main(){
    char customer_name[50];
    long mobile_number;
    float recharge_amount, bonus_amount,bonus, total_balance;

    printf("Enter Name: ");
    fgets(customer_name,50,stdin);

    printf("Enter Mobile Number: ");
    scanf("%ld", &mobile_number);

    printf("Enter Recharge Amount: ");
    scanf("%f", &recharge_amount);

    printf("\n\n");

    //Conditions and Validations

    if(recharge_amount <=0){
        printf("Please Enter Valid Recharge Amount...\n");
        return 0;
    }
    else if(mobile_number <=0){
        printf("Please Enter a Valid Mobile Number...\n");
        return 0;
    }
    else if(recharge_amount < 199.00){
        bonus = 0.00;
        bonus_amount = recharge_amount * bonus;
        total_balance = recharge_amount;
    }
    else if(recharge_amount >= 199.00 && recharge_amount <= 399.00){
        bonus = 0.05;
        bonus_amount = recharge_amount * bonus;
        total_balance = recharge_amount + bonus_amount;
    }
    else if(recharge_amount >= 400.00 && recharge_amount <= 799.00){
        bonus = 0.1;
        bonus_amount = recharge_amount * bonus;
        total_balance = recharge_amount + bonus_amount;
    }
    else if(recharge_amount >= 800.00){
        bonus = 0.2;
        bonus_amount = recharge_amount * bonus;
        total_balance = recharge_amount + bonus_amount;
    }

    printf("-----------Details--------------\n");
    printf("Name: ");
    puts(customer_name);
    printf("Mobile Number: %ld\n", mobile_number);
    printf("Recharge Amount: %.2f\n",recharge_amount);
    printf("Bonus Amount: %.2f\n",bonus_amount);
    printf("Total Balance Received: %.2f\n",total_balance);
    
    if(recharge_amount >= 1000.00){
        printf("VIP Customer!\n");
    }
    else{
        printf("Regular Customer.\n");
    }
    printf("--------------------------------\n");


    return 0;
}
