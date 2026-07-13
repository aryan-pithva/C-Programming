#include <stdio.h>

int main()
{
    char customer_name[50];
    int customer_age, number_of_ticket;
    float ticket_price_per_ticket, ticket_price, discount_amount, amount_to_pay;

    printf("Enter Customer Name: ");
    fgets(customer_name, 50, stdin);

    printf("Enter Customer Age: ");
    scanf("%d", &customer_age);

    printf("Enter Number of Tickets: ");
    scanf("%d", &number_of_ticket);

    printf("Enter Ticket Price Per Ticket: ");
    scanf("%f", &ticket_price_per_ticket);

    // Input Validation
    if (customer_age <= 0)
    {
        printf("Please Enter a Valid Age...\n");
        return 0;
    }

    if (number_of_ticket <= 0)
    {
        printf("Please Enter a Valid Number of Tickets...\n");
        return 0;
    }

    if (ticket_price_per_ticket <= 0)
    {
        printf("Please Enter a Valid Ticket Price...\n");
        return 0;
    }

    ticket_price = ticket_price_per_ticket * number_of_ticket;

    if (customer_age < 5)
    {
        discount_amount = ticket_price;
        amount_to_pay = 0;
    }
    else if (customer_age >= 5 && customer_age <= 17)
    {
        discount_amount = ticket_price * 50.0 / 100.0;
        amount_to_pay = ticket_price - discount_amount;
    }
    else if (customer_age >= 18 && customer_age <= 59)
    {
        discount_amount = 0;
        amount_to_pay = ticket_price;
    }
    else
    {
        discount_amount = ticket_price * 30.0 / 100.0;
        amount_to_pay = ticket_price - discount_amount;
    }

    if (number_of_ticket >= 5)
    {
        printf("Group Booking Applied...\n");
    }
    else
    {
        printf("Regular Booking Applied...\n");
    }

    printf("\n\n");
    printf("-----------------------Details-----------------------\n");
    printf("Customer Name: ");
    puts(customer_name);
    printf("Customer Age: %d\n", customer_age);
    printf("Number Of Tickets: %d\n", number_of_ticket);
    printf("Ticket Price of a Single Ticket: %.2f\n", ticket_price_per_ticket);
    printf("Original Amount: %.2f\n", ticket_price);
    printf("Discount: %.2f\n", discount_amount);
    printf("Total Amount to Pay: %.2f\n", amount_to_pay);

    return 0;
}
