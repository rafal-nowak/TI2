#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(const char* program_name) {
  printf("How to use: %s <#number1> <operation> <#number2>\n", program_name);
  exit(1);
}

int main(int argc, char const* argv[]) {
  int i, count;
  int number1 = 0, number2 = 0, result = 0;

  if (argc < 3)
    usage(argv[0]);

  number1 = atoi(argv[1]);
  number2 = atoi(argv[3]);

  if(!strcmp(argv[2], "add")) //if( argv[2] == "add" )  // if( napis1 == napis2 )
  {
    result = number1 + number2;
    printf("result: %d \n", result);
    exit(0);
  }

  if (!strcmp(argv[2], "sub"))
  {
    result = number1 - number2;
    printf("result: %d \n", result);
    exit(0);
  }

  if (!strcmp(argv[2], "mul"))
  {
    result = number1 * number2;
    printf("result: %d \n", result);
    exit(0);
  }

  if (!strcmp(argv[2], "div"))
  {
    if(number2 == 0)
    {
      printf("must not divide by zero \n");
      exit(2);
    }

    result = number1 / number2;
    printf("result: %d \n", result);
    exit(0);
  }

  printf("unexpected error \n");
  exit(3);
  
}
