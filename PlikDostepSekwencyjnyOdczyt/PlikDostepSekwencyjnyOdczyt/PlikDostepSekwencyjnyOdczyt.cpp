//Under "Project -> Properties -> C/C++ -> Preprocessor -> Preprocessor Definitions" add _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

FILE* fptr;

int main()
{
  char fileLine[100];
  fptr = fopen("plik.txt", "r");

  if (fptr != 0)
  {
    while (!feof(fptr))
    {
      fgets(fileLine, 100, fptr);
      if (!feof(fptr))
      {
        puts(fileLine);
      }
    }
  }
  else
  {
    printf("\nBlad otwierania pliku!\n");
  }

  fclose(fptr);

  return(0);
}

