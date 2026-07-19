#include <stdio.h>

int main(){
    int num = 0;
    int factor_count = 0;
    int factor = 0;
    int sum = 0;
    printf("Enter The Number: ");
    scanf("%d", &num);

    if(num <=0){
        printf("Please Enter a Positive Number...\n");
        return 0;
    }

    printf("\n\n");
    printf("--------------------------------\n");
    printf("Factors: ");


    for(int i = 1; i<= num; i++){
        if(num % i == 0){
            printf(" %d\t",i);
            factor = i;
            factor_count++;
            sum += factor;
        }
    }
    printf("\n");


    printf("Total Factors: %d\n", factor_count);
    printf("Sum of All Factors: %d\n",sum);


    if(factor_count == 2){
        printf("%d Is A Prime Number.\n",num);
    }
    else{
        printf("%d Is Not A Prime Number.\n",num);
    }


    if(num %2 == 0){
        printf("%d is Even.\n",num);
    }
    else{
        printf("%d is Odd.\n",num);
    }
    printf("--------------------------------\n");

    return 0;
}
