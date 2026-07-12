#include <stdio.h>

int main(){
    char customer_name[50];
    long account_number;
    float principal_amount,SI,maturity,interest_rate;
    int time;

    printf("Enter Customer Name: ");
    fgets(customer_name,50,stdin);

    printf("Enter Account Number: ");
    scanf("%ld",&account_number);

    printf("Enter Principal Amount: ");
    scanf("%f", &principal_amount);

    printf("Enter Time(years): ");
    scanf("%d", &time);

    printf("\n\n");

    if(principal_amount < 50000){
        interest_rate = 5;
        SI = (principal_amount * interest_rate * time)/100;
        maturity = principal_amount + SI;
    }
    else if(principal_amount >= 50000 && principal_amount <= 100000){
        interest_rate = 6.5;
        SI = (principal_amount * interest_rate * time)/100;
        maturity = principal_amount + SI;
    }
    else if(principal_amount > 100000){
        interest_rate= 8.0;
        SI = (principal_amount * interest_rate * time)/100;
        maturity = principal_amount + SI;
    }

    printf("-----------------------Details---------------------------\n");
    printf("Customer Name: ");
    puts(customer_name);
    printf("Account Number: %ld \n", account_number);
    printf("Principal Amount: %.2f\n",principal_amount);
    printf("Interest Rate: %.2f % \n", interest_rate);
    printf("Interest Earned: %.2f \n",SI);
    printf("Final Amount: %.2f INR\n", maturity);

    if(maturity >= 200000){
        printf("Premium Customer\n");
    }else{
        printf("Regular Customer\n");
    }

    return 0;
}
