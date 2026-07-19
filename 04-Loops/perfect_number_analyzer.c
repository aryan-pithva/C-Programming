#include <stdio.h>

int main(){
    int num = 0;
    int sum = 0;
    int proper_factor_count = 0;

    printf("Enter A Positive Number: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("Please Enter a Positive Integer...\n");
        return 0;
    }
    printf("\n\n");
    printf("------------------------------------------\n");
    printf("All Proper Factors of %d:\n", num);
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            printf("%d\t", i);
            proper_factor_count++;
            sum += i;
        }
    }
    printf("\n");

    printf("Sum Of All Proper Factors: %d\n", sum);
    printf("Total Proper Factors: %d\n", proper_factor_count);

    if(sum == num){
        printf("%d Is A Perfect Number.\n",num);
        printf("Excellent Mathematical Number!\n");
    }
    else{
        printf("%d Is Not A Perfect Number.\n",num);
        printf("Keep Exploring Mathematics!\n");
    }
    printf("------------------------------------------\n");
    return 0;
}
