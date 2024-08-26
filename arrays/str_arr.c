#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
  char cars[][10] = {"Mustang","Corvette","Camaro"};
  //cars[0] = "Tesla" => will not work
  strcpy(cars[0], "Tesla");
  int size = sizeof(cars)/sizeof(cars[0]);
  for(int i = 0; i < size; i++){ 
    printf("%s\n",cars[i]);
  }
  return EXIT_SUCCESS;
}


/* ABOUT STRCPY()
 * @benoitgauthier6089 on youtube
One VERY important point when using strcpy() that really should have been mentionned:
The destination string should be large enough to accept the source string. Otherwise, it will overflow on other memory adresses and potentially corrupt your program*/
