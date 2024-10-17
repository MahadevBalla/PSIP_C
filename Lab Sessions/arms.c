#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // store the number of digits in originalNum
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // check if num is an Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1; // num is an Armstrong number
    else
        return 0; // num is not an Armstrong number
}

int main() {
    int lowerLimit = 1, upperLimit = 1000;
    int count = 0;

    printf("Armstrong numbers between %d and %d are:\n", lowerLimit, upperLimit);

    for (int i = lowerLimit; i <= upperLimit; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal Armstrong numbers: %d\n", count);

    return 0;
}
