#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
  float base,height,area;
  input(base,height);
}

void input(float base, float height)
{
  float area;
  printf("Enter base and height:");
  if(scanf("%f%f",&base,&height));
  find_area(base,height,&area);
}

void find_area(float base , float height, float *area)
{
  *area = (base*height)*1/2;
  output(base,height,*area);
}

void output(float base, float height, float area)
{
  printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}
