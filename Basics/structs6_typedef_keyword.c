#include <stdio.h>

// a + bi

typedef struct {
    float real, imaginare;
} complex;

complex addition(complex x, complex y) {
    complex result;

    result.real = x.real + y.real;
    result.imaginare = x.imaginare + y.imaginare;

    return result;
}

complex subtraction(complex x, complex y) {
    complex result;

    result.real = x.real - y.real;
    result.imaginare = x.imaginare - y.imaginare;

    return result;
}

complex multiplication(complex x, complex y) {
    complex result;

    result.real = (x.real * y.real) - (x.imaginare * y.imaginare);
    result.imaginare = (x.real * y.imaginare) + (x.imaginare * y.real);

    return result;
}

int main() {
    complex number1 = {1,1}, number2 = {2,2};
    complex result;

    printf("Addition\n");
    result = addition(number1, number2);
    printf("%3.0f %3.0f\n",result.real,result.imaginare);

    printf("Subtraction\n");
    result = subtraction(number1, number2);
    printf("%3.0f %3.0f\n",result.real,result.imaginare);

    printf("Multiplication\n");
    result = multiplication(number1, number2);
    printf("%3.0f %3.0f\n",result.real,result.imaginare);

    return 0;
}