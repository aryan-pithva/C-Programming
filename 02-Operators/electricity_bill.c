#include<stdio.h>

int main(){
    char customer_name[20];
    int customer_id,units_consumed,total_bill;

    printf("Enter Customer Name: ");
    fgets(customer_name,20,stdin);
    
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);

    printf("Units Consumed: ");
    scanf("%d", &units_consumed);

    if(units_consumed < 0){
        printf("Please Enter Valid Units....\n");
    }
    else if(units_consumed > 0 && units_consumed <=100){
        total_bill = units_consumed * 5;
    }
    else if(units_consumed >= 101 && units_consumed <= 200){
        total_bill = units_consumed * 7;
    }
    else if(units_consumed >= 200){
        total_bill = units_consumed * 10;
    }
    else{
        printf("Enter Valid Input. \n");
    }

    printf("\n\n");
    printf("--------------------Bill--------------------\n");
    printf("Customer Name: ");
    puts(customer_name);
    printf("Customer ID: %d\n", customer_id);
    printf("Units Consumed: %d\n", units_consumed);
    printf("Total Bill: %d\n", total_bill);

    if(total_bill >= 2000){
        printf("High Electricity Consumption!\n");
    }else{
        printf("Electricity Usage is Normal.\n");
    }

    return 0;
}
