#include <stdio.h>

int input(int *x);
float borga_X(int x);
void output(int x, float result);

int main() {
    int x;
    float result;

    x = input(&x);
    result = borga_X(x);
    output(x, result);

    return 0;
}

int input(int *x) {
    printf("Enter the value of x: ");
    scanf("%d", x);
    return *x;
}

float borga_X(int x) {
    float term, borga;
    int n, fact;

    term = borga = 1.0;
    n = 1;
    fact = 1;

    while (term >= 0.000001) {
        borga += term;
        n++;
        fact *= (2 * n - 1) * (2 * n - 2);
        term = (term * x * x) / fact;
    }

    return borga;
}

void output(int x, float result) {
    printf("borga(%d) = %.6f\n", x, result);
}
