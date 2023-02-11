#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
	float x1,x2,x3,y1,y2,y3;
	input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
	int result = is_triangle(x1,y1,x2,y2,x3,y3);
	output(x1,y1,x2,y2,x3,y3,result);
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
	printf("Enter coordinates of 3 points of a triangle:\n");
	if(scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3));
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
	int result=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	return result;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
	printf("The points (%.f,%.f), (%.f,%.f) and (%.f,%.f) ",x1,y1,x2,y2,x3,y3);
	if(result==0)
		printf("do not form a triangle.\n");
	else
		printf("forms a triangle.\n");
}