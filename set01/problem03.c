#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
}
 int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int add(int a, int b);
{
  int sum=0;
  sum=a+b;
  return sum;
}
void output(int a, int b, int sum);
{
  printf("the sum of %d and %d=%d",a,b,sum);
}
