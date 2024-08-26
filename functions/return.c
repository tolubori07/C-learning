#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

double square(double x)
{
   double result = x * x;
   return result;
}

int main()
{
   double x = square(3.14);
   printf("%lf", x);

   return 0;
}

