#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void readComplex(struct Complex* complexNum) {
    printf("Enter the real part: ");
    scanf("%f", &(complexNum->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(complexNum->imaginary));
}

void writeComplex(struct Complex complexNum) {
    printf("Complex number: %.2f + %.2fi\n", complexNum.real, complexNum.imaginary);
}

struct Complex addComplex(struct Complex complexNum1, struct Complex complexNum2) {
    struct Complex result;

    result.real = complexNum1.real + complexNum2.real;
    result.imaginary = complexNum1.imaginary + complexNum2.imaginary;

    return result;
}

struct Complex multiplyComplex(struct Complex complexNum1, struct Complex complexNum2) {
    struct Complex result;

    result.real = complexNum1.real * complexNum2.real - complexNum1.imaginary * complexNum2.imaginary;
    result.imaginary = complexNum1.real * complexNum2.imaginary + complexNum1.imaginary * complexNum2.real;

    return result;
}

int main() {
    struct Complex complexNum1, complexNum2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&complexNum1);

    printf("Enter the second complex number:\n");
    readComplex(&complexNum2);

    sum = addComplex(complexNum1, complexNum2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(complexNum1, complexNum2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
