#include <stdio.h>

int main() {
    int n = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Enter Valid Integer...\n");
        return 0;
    }

    int arr[n];
    int sum = 0;
    float average = 0.0;
    int even_count = 0, odd_count = 0;

    // Input
    for (int i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize after input
    int large_element = arr[0];
    int small_element = arr[0];

    printf("\n----------------------------------------\n");
    printf("Elements:\n");

    // Processing
    for (int i = 0; i < n; i++) {

        printf("%d\t", arr[i]);

        sum += arr[i];

        if (arr[i] > large_element) {
            large_element = arr[i];
        }

        if (arr[i] < small_element) {
            small_element = arr[i];
        }

        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    average = (float)sum / n;

    printf("\n\n");
    printf("Sum of Elements: %d\n", sum);
    printf("Average of Elements: %.2f\n", average);
    printf("Largest Element: %d\n", large_element);
    printf("Smallest Element: %d\n", small_element);
    printf("Total Even Numbers: %d\n", even_count);
    printf("Total Odd Numbers: %d\n", odd_count);

    printf("----------------------------------------\n");

    return 0;
}
