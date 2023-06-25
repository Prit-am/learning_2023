#include <stdio.h>

void findMinMaxDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;

    for (int i = 0; i < n; i++) {
        int num = numbers[i];

        while (num > 0) {
            int digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallestDigit);
        printf("Largest digit: %d\n", largestDigit);
    }
}

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findMinMaxDigits(n, numbers);

    return 0;
}
