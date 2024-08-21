#include <stdio.h>
#include <string.h>
int main() {
  int age;
  char name[25]; // 25 bytes
  char feeling[25];

  printf("\nWhat is your name?");
  scanf("%s", name);

  printf("\nHello, %s, how are you?", name);
  //fgets(feeling,25,stdin);
  scanf("%s", feeling);
  if (strcmp(feeling, "good") == 0) {
    printf("\noh you think you're good?");
    printf("\nHow old are you?");
    scanf("%d", &age);

    if(age > 35){ 
      printf("Ha, you ain't good, you pushing 40");
    }else {
    printf("Aight young blood, you good");
    }
  }else {
    printf("oh? %s ?I hope you feel better soon!",feeling);
  }

  return 0;
}
