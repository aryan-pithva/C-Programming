#include <stdio.h>

int main(){
    int num=0;
    int total_digits = 0;
    int sum = 0;
    int digit = 0;
    int reverse = 0;
    int armstrong = 0;
    int cube = 0;
    

    printf("Enter a Positive Number: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("Please Enter A Valid Number..\n");
        return 0;
    }

    int original = num;
    int large = num % 10;
    printf("\n\n");

    while(num > 0){
        digit = num %10;
        sum += digit;
        total_digits++;
        num = num/10;
        reverse = reverse * 10 + digit;
        cube = digit * digit * digit;
        armstrong += cube;
        if(digit > large){
            large = digit;
        }
    }
   

    printf("------------------------------------------\n");
    printf("Total Digits: %d\n", total_digits);
    printf("Sum of All Digits: %d\n", sum);
    printf("Reversed Number: %d\n", reverse);
    if(reverse == original){
        printf("Number Is Palindrome.\n");
    }
    else{
        printf("Number Is Normal.\n");
    }
     if(armstrong == original){
        printf("Number is Armstrong.\n");
    }
    else{
        printf("Number is Regular.\n");
    }
    printf("Largest Digit: %d\n",large);
    printf("------------------------------------------\n");

    
    return 0;
}
