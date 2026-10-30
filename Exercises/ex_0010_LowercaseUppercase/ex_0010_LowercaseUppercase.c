// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

#include <stdbool.h>

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
  char userChar = 0;

  // Get char from user
  int status = 0;
  const int nbExpectedValues = 1;
  do
  {
    printf("Type a letter: ");
    status = scanf("%c", &userChar);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  // Interpret char
  if (userChar >= 'a' && userChar <= 'z')
  {
    printf("lowercase\n");
    return;
  }

  if (userChar >= 'A' && userChar <= 'Z')
  {
    printf("UPPERCASE\n");
    return;
  }

  printf("The character you entered is not a letter.\n");
}
