#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
  int n, sum;
  n = input_array_size();
  int a[n];
  input_array(n,a);
  sum= sum_composite_numbers(n, a);
  output(sum);
  return 0;
}

int input_array_size()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("Enter the number\n");
      scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
  int i,j, sum=0; 
  for(i=0; i<n; i++)
    {
         
      for(j=2; j<a[i]; j++)
         {
            if(a[i]%j==0)
                {
                  sum=sum+a[i];
                  break;
                 }
          }
      
      }
  return sum;
}

void output(int sum)
{
  printf("%d\n", sum);
}