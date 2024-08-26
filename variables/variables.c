#include <stdio.h>

int main() {
  // variable =   Allocated space in memory to store a value.
  //              We refer to a variable's name to access the stored value.
  //              That variable now behaves as if it was the value it contains.
  //              BUT we need to declare what type of data we are storing.
  int x; // declaration
  x = 245;
  int y = 200;

  int age = 17;
  float GPA = 2.05;
  char grade = 'C'; // char stores single character
  // string: No OOP in C and strings are OOP so to create a string create an
  // array of characters
  char name[] = "Bro";

  // format specifier
  printf("Hello %s\n",name);
  printf("You are %d years old", age);
  printf("Your average grade is %c\n",grade);
  printf("Your GPA is %f",GPA);

  return 0;
}
