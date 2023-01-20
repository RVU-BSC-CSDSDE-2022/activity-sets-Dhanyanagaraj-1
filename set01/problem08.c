#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);
int main()
{
  int n,sum=0;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_n_array(n,a);
  output(n,a,sum);
  return 0;
}
int input_array_size()
{
  int n;
  printf("enter the size of an array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  for(int i=0;i<n;i++)
    printf("enter the element:\n");
    scanf("%d",&a[i]);
}
int sum_n_array(int n, int a[n])
{ int sum=0;
  int i;
  for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
  return n;
   }
  

void output(int n, int a[n], int sum)
{
  printf("the sum of ");
  for(int i=0;i<n;i++)
    {
      printf("%d",a[i]);
    }
  printf("%d\n",sum);
}
  
  