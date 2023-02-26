#include <stdio.h>
int main()
{
    int n = input_degree();
    float a[n];
    input_coefficients(n, a);
    float x = input_x();
    float result = evaluate_polynomial(n, a,x);
    output(n, a, x, result);
    return 0;
}

int input_degree() {
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[n])
{
    printf("Enter the coefficients of the polynomial starting from the highest degree:\n");
    for (int i = 0; i <= n; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float input_x()
{
    float x;
    printf("Enter the value of x at which the polynomial is to be evaluated: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
    float result = a[n];
    for (int i = n - 1; i >= 0; i--)
      {
        result = result * x + a[i];
    }
    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("The polynomial of degree %d with coefficients:\n", n);
    for (int i = 0; i <= n; i++)
      {
        printf("a[%d] = %f\n", i, a[i]);
    }
    printf("evaluated at x = %f is %f\n", x, result);
}


