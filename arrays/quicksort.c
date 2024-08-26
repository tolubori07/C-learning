#include <stdio.h>
#include <stdlib.h>

void quicksort(int list[], int low, int hi) {
  if (low < hi) {
    int pivot = list[(low + hi) / 2];
    int tmpLow = low;
    int tmpHi = hi;

    while (tmpLow <= tmpHi) {
      while (list[tmpLow] < pivot) {
        tmpLow++;
      }
      while (list[tmpHi] > pivot) {
        tmpHi--;
      }
      if (tmpLow <= tmpHi) {
        int tmpSwap = list[tmpLow];
        list[tmpLow] = list[tmpHi];
        list[tmpHi] = tmpSwap;
        tmpLow++;
        tmpHi--;
      }
    }

    // Recursively sort partitions
    quicksort(list, low, tmpHi);
    quicksort(list, tmpLow, hi);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  int list[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
  int hi = sizeof(list) / sizeof(list[0]) - 1;
  quicksort(list, 0, hi);
  printArray(list, hi + 1);
  return EXIT_SUCCESS;
}
