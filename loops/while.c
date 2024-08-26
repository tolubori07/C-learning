#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // while loop = repeats a section of code possibly unlimited times.
  // WHILE some condition remains true
  // a while loop might not execute at all

  char name[25];

  printf("\nWhat's your name?: ");
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0'; //this is setting the last character(the new line \n character) to null

  while (strlen(name) == 0) {
    printf("\nYOU DID NOT ENTER YOUR NAME!");
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // same thing as above, strings are arrays of character, gets thge last char in the string and sets it top null.
  }

  printf("Hello %s", name);
  return EXIT_SUCCESS;
}
