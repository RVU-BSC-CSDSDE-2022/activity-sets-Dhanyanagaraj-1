#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
  int a,b,c,largest;
  printf("Enter the number");
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
  return 0; 
}

int input()
{
  int n;
  if(scanf("%d",&n));
  return n;
}

int compare(int a, int b, int c)
{
  if(a>b && a>c)
    return a;
  if(b>c)
    return b;
  return c;
}
void output(int a, int b, int c, int largest)
{
  printf("The largrest of %d,%d,%d is %d",a,b,c,largest)
