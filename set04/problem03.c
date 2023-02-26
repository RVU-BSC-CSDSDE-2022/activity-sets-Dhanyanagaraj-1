#include <stdio.h>
int main()
{
    int n, r, result;

    input_n_and_r(&n, &r);
    result = nCr(n, r);
    output(n, r, result);

    return 0;
}


void input_n_and_r(int *n, int *r)
{
    printf("Enter the value of n: ");
    scanf("%d", n);
    printf("Enter the value of r: ");
    scanf("%d", r);
}

int nCr(int n, int r)
{
    int numerator = 1, denominator = 1;

    if (r > n - r) 
    {
        r = n - r;
    }
    for (int i = 0; i < r; i++) 
    {
        numerator *= (n - i);
        denominator *= (i + 1);
    }

    return numerator / denominator;
}

void output(int n, int r, int result)
{
    printf("%dC%d = %d\n", n, r, result);
}

