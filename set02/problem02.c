#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
  int a,b,c;
  printf("enter the three sides of triangle");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c)
  {
    printf("equlateral triangle ");
  }
  else if (a==b || a==c || b==c)
  {
    printf("isscalene triangle");
  }
  else
  {
    printf("Scalene triangle");
  }
  
}