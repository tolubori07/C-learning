#include <stdio.h>

int main(){
  const float pi = 3.14159;
  double radius;
  double diameter;
  int option;
  double circumference;
  printf("Are you using 2πr(1) or πd(2)?");
  scanf("%d",&option);
  if(option == 1){ 
    printf("What is the radius of this circle?");
    scanf("%lf",&radius);
    circumference = 2 * pi * radius;
    printf("\n%lf",circumference);
  }else if (option == 2) {
    printf("What is the diameter of this circle?");
    scanf("%lf",&diameter);
    circumference = pi * diameter;
    printf("\n%lf",circumference);
  }
  return 0;
}
