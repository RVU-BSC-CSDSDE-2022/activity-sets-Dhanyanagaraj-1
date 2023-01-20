#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
}

int input_side()
{
  int n;
  printf("Enter the side:");
  if(scanf("%d",&n));
  return n;
}

int check_scalene(int a, int b, int c)
{
  int isscalene;
  if( a != b && b!=c && c!=a)
    return isscalene;
  else if( a==b && b==c)
    return isscalene;
  else if( a==b && a==c && b==c)
    return isscalene;
}

void output(int a, int b, int c, int isscalene)
{
  if(a != b && b != c && c != a)
  {
    printf("The triangle with sides %d, %d and %d is scalene",a,b,c);
  }
  else
  {
    printf("The triangle with sides %d, %d and %d is not scalene",a,b,c);
  }  
}