#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float number1, number2, number3, number4;
    float sum, average, sumofsquares;

    printf("Enter First Number: ");
    scanf("%f", &number1);

    printf("Enter Second Number: ");
    scanf("%f", &number2);

    printf("Enter Third Number: ");
    scanf("%f", &number3);

    printf("Enter Fourth Number: ");
    scanf("%f", &number4);

    sum = number1 + number2 + number3 + number4;
    average = sum / 4;
    sumofsquares = number1 * number1 + number2 *number2 + number3 * number3 + number4 * number4;

    printf("Sum: %.2f\n",sum);
    printf("Average: %.2f\n",average);
    printf("Sume of squares: %.2f\n",sumofsquares);
    return 0;
}