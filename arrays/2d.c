#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  {
    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data
    /*
    int numbers[2][3] = {
                         {1, 2, 3},
                         {4, 5, 6}
                        };
    */
    int numbers[2][3];
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        printf("%d ", numbers[i][j]);
      }
      printf("\n");
    }
  }
  return EXIT_SUCCESS;
}
