#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n = input_n();
    Fraction *f = (Fraction*) malloc(n * sizeof(Fraction));
    input_n_fractions(n, f);
    Fraction sum = add_n_fractions(n, f);
    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    output(n, f, sum);
    free(f);
    return 0;
}
int input_n() {
    int n;
    printf("Enter the number of fractions to add: ");
    scanf("%d", &n);
    return n;
}

Fraction input_fraction() 
{
    Fraction f;
    printf("Enter the numerator: ");
    scanf("%d", &f.num);
    printf("Enter the denominator: ");
    scanf("%d", &f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[n])
{
    for (int i = 0; i < n; i++) 
    {
        printf("Fraction %d:\n", i + 1);
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    } 
    else
    {
        return find_gcd(b, a % b);
    }
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    int lcd = (f1.den * f2.den) / find_gcd(f1.den, f2.den);
    sum.num = (f1.num * lcd / f1.den) + (f2.num * lcd / f2.den);
    sum.den = lcd;
    return sum;
}

Fraction add_n_fractions(int n, Fraction f[n]) {
    Fraction sum = f[0];
    for (int i = 1; i < n; i++) 
    {
        sum = add_fractions(sum, f[i]);
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum) {
    printf("The sum of the following %d fractions:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d/%d\n", f[i].num, f[i].den);
    }
    printf("is %d/%d\n", sum.num, sum.den);
}

