// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

#include <stdbool.h>

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable
void ex_0019_flushStdin(void)
{
  int c;
  do
  {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

int ex_0019_Read(int min, int max)
{
  int userNumber = 0;

  bool inputValid = false;
  int nbExpectedValues = 1;
  do {
    printf("Please enter the multiplication table (in [%d..%d]): ", min, max);
    int status = scanf(" %d", &userNumber);

    inputValid = status == nbExpectedValues || status == EOF;

    ex_0019_flushStdin();

    // check value
    if (inputValid && (userNumber < min || userNumber > max))
    {
      inputValid = false;
    }
  } while (!inputValid);

  return userNumber;
}

void ex_0019_MultiplicationTable(int number)
{
  printf("\nMULTIPLICATION TABLE FOR %d\n", number);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d X %d = %d\n", number, i, i*number);
  }
}
