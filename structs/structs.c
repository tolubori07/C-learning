#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Player {
  char name[12];
  int score;
};

int main(int argc, char *argv[]) {

  // struct = collection of related members ("variables")
  //          they can be of different data types
  //          listed under one name in a block of memory
  //          VERY SIMILAR to classes in other languages (but no methods)

  struct Player player1 = {"Bro", 4};
  struct Player player2 = {"Bra", 5};

  // strcpy(player1.name, "Bro");
  // player1.score = 4;

  // strcpy(player2.name, "Bra");
  // player2.score = 5;

  printf("%s\n", player1.name);
  printf("%d\n", player1.score);

  printf("%s\n", player2.name);
  printf("%d\n", player2.score);
  return EXIT_SUCCESS;
}
