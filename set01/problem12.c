#include<stdio.h>

struct complex
{
float real;
float imaginary;
};
typedef struct complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
  int n;
  complex sum={0,0};
  n=get_n;
  complex c[n];
  input_n_complex(n,c);
  add_n_complex(n,c);
  output(n,c,sum);
  return 0;
}
int get_n()
{
  int n;
  printf("enter the size of an array:");
  scanf("%f",&n);
  return n;
}
Complex input_complex()
{
  complex c;
  printf("enter the real part:");
  scanf("%f",&c.real);
  printf("enter the imaginary part:");
  scanf("%f",&c.imaginary);
  return c;
}
void input_n_complex(int n, Complex c[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      c[i]=input_complex();
    }
}
Complex add(Complex a, Complex b)
{
  comlex a;
  a.real=a.real+b.real;
  a.imaginary=a.imaginary+b.imaginary;
  return a;
}
Complex add_n_complex(int n, Complex c[n])
{
  complex sum={0,0};
  for (i=0;i<n;i++)
    {
      sum=add(sum.c[1])
    }
  return sum;
}
void output(int n, Complex c[n], Complex result)
{
  printf("the sum %f+
%fi\n",result.real,result.imaginary);
}
