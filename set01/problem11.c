  #include<stdio.h>

struct complex
{
 float real;
float imaginary;
};    
  typedef struct complex Complex;
  
  Complex input_complex();
  Complex add_complex(Complex a, Complex b);
  void output(Complex a,Complex b,Complex sum);
  
 int main()
{
  complex a,b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
}
Complex input_complex()
{
  complex c1;
  printf("enter the real part:\n");
  scanf("%f",&c1.real);
  printf("enter the imaginary part:\n";
  scanrf("%f",&c1.imaginary);
  return c1;
}
Complex add_complex(Complex a, Complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(Complex a, Complex b, Complex sum)
{
  printf("the sum of %f+%fi and %f+%fi is %f+%fi\n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}