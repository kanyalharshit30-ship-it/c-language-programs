//Check if a Number is Armstrong
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    double result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;

    // Armstrong calculation
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}