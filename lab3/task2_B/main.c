#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"


int main(int argc, char *argv[]){
  int verbose = 1;
  int a;
  int b;
  char choice;
  if (strcmp(argv[1],"-q") == 0) {
    verbose = 0;
  }
  if (verbose) {
    printf("Welcome to the world's most advanced calculator!\n");
    printf("After years of research and development, we are proud to welcome you to our new and improved calculator.\n");
  }
  if (verbose) {
    a = atoi(argv[1]);
    choice = argv[2][0];
    b = atoi(argv[3]);
  } else {
    a = atoi(argv[2]);
    choice = argv[3][0];
    b = atoi(argv[4]);
  }
  // Evaluate operation based on user's choice.
  int result; 
  switch (choice){
    case '+':
      result = add(a, b);
      break;
    case '-':
      result = subtract(a, b);
      break;
    case '*':
      result = multiply(a, b);
      break;
    case '/':
      result = divide(a, b);
      break;
    default:
      printf("Invalid operands");
      return 1;
  }
  if (verbose) {
    printf("The result of your operation is %d.\n", result); 
  } else {
    printf("%d\n", result);
  }
  return 0;
}
