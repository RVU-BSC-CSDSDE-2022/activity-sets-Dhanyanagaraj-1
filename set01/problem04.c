#include<stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
}
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d=%d",a,b,sum);
}
