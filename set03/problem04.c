#include<stdio.h>
int main()
{
int n, t1 = 0, t2 = 1, nextTerm = 0, i;
  }
 int input()
{
printf("Enter the n value:");
scanf("%d", &n);
  }
  int find_fibo(int n)
{
if(n == 0 || n == 1) 
printf(“%d”, n); 
else
nextTerm = t1 + t2;
for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
  }
 void output(int n, int fibo)
  {
printf("%d", t2);
}
