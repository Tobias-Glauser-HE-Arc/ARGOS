// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  int number1, number2;

  int status = 0;
  const int nbExpectedValues = 2;
  do
  {
    printf("Please enter 2 integers: ");
    status = scanf(" %d %d", &number1, &number2);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  char sign = '>';

  if (number1 == 0 || number2 == 0)
  {
    sign = '=';
  } else if ((number1 < 0) ^ (number2 < 0)) // "^" is XOR
  {
    sign = '<';
  }

  printf("%d * %d %c 0\n", number1, number2, sign);
}
