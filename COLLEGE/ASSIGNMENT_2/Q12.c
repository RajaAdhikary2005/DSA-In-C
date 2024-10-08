#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    // Input first complex number
    printf("Enter the first complex number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter the second complex number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Add the complex numbers
    sum = addComplex(c1, c2);

    // Multiply the complex numbers
    product = multiplyComplex(c1, c2);

    // Display the results
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Product = %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}
