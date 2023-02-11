#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main(){
  float x1,x2,y1,y2;
  input(&x1,&y1,&x2,&y2);
  float distance = find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
  return 0;
}

void input(float *x1, float *y1, float *x2, float *y2){
  printf("Enter the coordinates of the first point:\n");
  scanf("%f %f",x1,y1);
  printf("Enter the coordinates of the second point:\n");
  scanf("%f %f",x2,y2);
}

float find_distance(float x1,float y1,float x2,float y2){
   float distance;
   distance  = sqrt(pow((x1-y1),2) + pow((x2-y2),2));
   return distance;
}

void output(float x1, float y1, float x2, float y2, float distance){
  printf("the distance between the two points is %2.1f %2.1f and %2.1f %2.1f is %2.1f",x1,y1,x2,y2,distance);
}