#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);
int main()
{
  triangle t;
  t= input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
Triangle input_triangle()
{
  triangle t;
  printf("enter the base of triangle:");
  scanf("%f",&t.base);
  printf("enter the altitude of triangle:");
  scanf("%f",&t.altitude);
  return t;
}
void find_area(Traingle *t)
{
  t->area=((t->base)*(t->altitude))*0.5;
}
void output(Triangle t)
{
  printf("the area of triangle is %f",t.area);
}