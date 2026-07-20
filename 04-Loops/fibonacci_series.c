#include <stdio.h>

int main() {
    int terms;
    int first = 0, second = 1, next;
    int sum = 0;
    int largest = 0;
    int even_count = 0;
    int odd_count = 0;
    int crossed = 0;

    printf("Enter Number of Terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Invalid Input\n");
        return 0;
    }

    printf("\n-----------------------------------------\n");
    printf("Fibonacci Series: ");

    for (int i = 1; i <= terms; i++) {

        if (i == 1) {
            next = first;
        }
        else if (i == 2) {
            next = second;
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d\t", next);

        sum += next;

        if (i == 1 || next > largest) {
            largest = next;
        }

        if (next % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }

        if (next > 100) {
            crossed = 1;
        }
    }

    printf("\n\n");
    printf("Sum of Series: %d\n", sum);
    printf("Largest Number: %d\n", largest);
    printf("Even Numbers: %d\n", even_count);
    printf("Odd Numbers: %d\n", odd_count);

    if (crossed) {
        printf("Series Crossed 100.\n");
    }
    else {
        printf("Series Stayed Below 100.\n");
    }

    printf("-----------------------------------------\n");

    return 0;
}
