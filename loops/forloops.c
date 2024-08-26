#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // A for loop repeats a section of code a fixed amount of times.
  for (int i = 1; i <= 100; i++) {
    if (i % 15 == 0) {
      printf("Fizz Buzz!\n");
    } else if (i % 3 == 0) {
      printf("Fizz\n");
    } else if (i % 5 == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }

  return EXIT_SUCCESS;
}

