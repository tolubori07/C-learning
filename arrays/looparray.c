#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int prices[5] = {12,13,10,15,14};
  for (int i = 0; i <= sizeof(prices)/sizeof(prices[0])-1 ;i++) {
    printf("\n%d",prices[i]);
  }
  return EXIT_SUCCESS;
}
