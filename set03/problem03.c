#include <stdio.h>
int main() 
{
  int n,result;
  n=input_number;
  result=is_prime(n);
  output(n,result);
  }
int input_number()
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  }
int is_prime(int n)
{
  if (n == 0 || n == 1)
    flag = 1;
  }
  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }

void output(int n, int result)
{
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
}