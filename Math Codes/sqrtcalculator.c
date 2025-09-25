#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("=== Square Root Calculator ===\n");
    printf("Enter a non-negative number to calculate its square root:\n> ");
    if (scanf("%lf", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (number < 0) {
        printf("Error: Cannot calculate the square root of a negative number.\n");
        return 1;
    }

    result = sqrt(number);

    printf("The square root of %.6f is %.6f\n", number, result);
    printf("Properties:\n");
    printf("- sqrt(%.6f) * sqrt(%.6f) = %.6f\n", number, number, number);
    printf("- sqrt(%.6f^2) = %.6f\n", result, number);
    printf("- sqrt(0) = 0\n");
    printf("- sqrt(1) = 1\n");
    printf("Thank you for using the Square Root Calculator!\n");

    return 0;
}