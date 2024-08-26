#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int rows;
  int cols;
  char symbol;
  char buf;

  printf("\nEnter number of rows: ");
  scanf("%d", &rows);

  printf("\nEnter number of columns: ");
  scanf("%d", &cols);
  
  scanf("%c",&buf); // this is neccessary because after the col scan, the scan picks up the new line character and reads it as input, so this is a way to bypass that

  printf("\nEnter the character you wish to use: ");
  scanf("%c", &symbol);

  for(int i = 1; i<=rows; i++){ 
    for(int j = 1; j<=cols; j++){ 
      printf("%c ",symbol);
    } 
    printf("\n");
  }
  return EXIT_SUCCESS;
}
