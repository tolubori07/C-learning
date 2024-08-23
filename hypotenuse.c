#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  float a;
  float b;
  printf("\nWhat is the side a?");
  scanf("\n%f", &a);
  printf("\nWhat is the side b?");
  scanf("\n%f",&b);
  float c = sqrt(pow(a,2)+pow(b,2));
  printf("\nThe hypotenuse of this tringle is: %f",c);
  return EXIT_SUCCESS;
}
