#include<math.h>
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  float n,sqrroot;
  n=input();
sqrroot=square_root(n);
  output(n,sqrroot);
  
}
float input()
{
  float n;
  printf("enter the number:");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float guess,next;
  guess=n/2;
  next=0.5*(guess+n/guess);
  while(fabs(next-guess)>0.001)/*fabs(obsolute value)*/
    {
      guess=next;
      next=0.5*(guess+n/guess);
    }
  return next;
}
void output(float n, float sqrroot)
{
  printf("square root of %f.2f is %.2f",n,sqrroot);
}
