// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  int number1 = 0;
  int number2 = 0;
  int number3 = 0;

  int status = 0;
  const int nbExpectedValues = 3;
  do
  {
    printf("Please enter 3 integers separated by commas: ");
    status = scanf(" %d , %d , %d", &number1, &number2, &number3);
    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  if (number1 < number2)
  {
    number1 += number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
  }

  if (number1 < number3)
  {
    number1 += number3;
    number3 = number1 - number3;
    number1 = number1 - number3;
  }

  if (number2 < number3)
  {
    number3 += number2;
    number2 = number3 - number2;
    number3 = number3 - number2;
  }

  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", number1, number2, number3);
}
