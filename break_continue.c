#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // continue: skips the rest of the code and forces the next iteration
  // break: exits the loop/switch/whatever iteration kinda thingy you got going
  // on
  for (int i = 1; i <= 20; i++) {
    if (i == 10) {
      continue;// causes it to skip 10
      // break; //causes it to stop at 10
    }
    printf("%d\n", i);
  }
  return EXIT_SUCCESS;
}
