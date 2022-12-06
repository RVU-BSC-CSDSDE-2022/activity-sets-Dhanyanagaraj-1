  #include <stdio.h>
  #include <math.h>
  int main()
    {
    double n, x, y;
     printf("Enter a number: ");
     scanf("%lf", &n);
       x = n;
      y = 1;
      while (x - y > 0.000001)
        {
          x = (x + y)/2;
          y = n/x;
        }
      printf("Square root of %lf = %lf", n, x);
        return 0;
    }