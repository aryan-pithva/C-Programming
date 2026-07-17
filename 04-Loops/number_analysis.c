#include <stdio.h>

int main()
{

    int N = 0;
    int sum = 0;
    int even_count = 0;
    int odd_count = 0;
    int largest_multiple_of_7=0;
    printf("Enter N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Invalid Number..\n");
        return 0;
    }
    printf("\n");

    for (int i = 1; i <= N; i++)
    {
        printf("%d \t", i);
        sum += i;
        if (i % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("\n");

    for (int i = N; i > 0; i--)
    {
        printf("%d \t", i);
    }
    printf("\n");

    printf("Sum of 1 to N Numbers is: %d\n", sum);
    printf("Total Odd Numbers: %d\n", odd_count);
    printf("Total Even Numbers: %d\n", even_count);
    if (N % 3 == 0 && N % 5 == 0)
    {
        printf("FizzBuzz Number.\n");
    }
    else
    {
        printf("Regular Number.\n");
    }
    largest_multiple_of_7 = N - (N % 7);
    if (largest_multiple_of_7 == 0)
    {
        printf("Multiple of 7 Not Found.\n");
    }
    else
    {
        printf("Largest Multiple of 7: %d\n", largest_multiple_of_7);
    }

    return 0;
}
