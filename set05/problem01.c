#include <stdio.h>
#include <math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

int main() 
{
  Point a,b;
  float distance;
  a=input();
  b=input();
  dist(a, b, &distance);
  output(a, b, distance);
  return 0;
}

Point input()
{
  Point p;
  printf("Enter x coordinate: ");
  scanf("%f", &p.x);
  printf("Enter y coordinate: ");
  scanf("%f", &p.y);
  return p;
}

void dist(Point a, Point b, float *res) 
{
  *res = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void output(Point a, Point b, float res)
{
  printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n",
         a.x, a.y, b.x, b.y, res);
}


