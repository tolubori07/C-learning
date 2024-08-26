#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
  char x = 'x';
  char y = 'y';
  char temp;
  temp = y;
  y = x;
  x = temp;
  printf("x = %c\n", x);
  printf("y = %c\n", y);

  // FOR STRINGS
  char xorg[15] = "xorg";
  char yorg[15] = "yorg";
  char temporg[15];
  strcpy(temporg, yorg);
  strcpy(yorg, xorg);
  strcpy(xorg, temporg);
  printf("x = %s\n", xorg);
  printf("y = %s\n", yorg);

  return EXIT_SUCCESS;
}
