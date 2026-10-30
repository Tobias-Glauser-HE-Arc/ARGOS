// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

#include <stdbool.h>

// Function definitions
void ex_0017_Factorial(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter a non-negative integer N: ";

  // TODO: read a non-negative integer N, then compute and print N!
  int userValue = 0;

  // get number of values
  bool inputValid = false;
  int nbExpectedValues = 1;
  do {
    printf("%s", input_message);
    int status = scanf(" %d", &userValue);

    inputValid = status == nbExpectedValues || status == EOF;

    // flush stdin
    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }

    // check value
    if (!inputValid || userValue < 0)
    {
      inputValid = false;
    }
  } while (!inputValid);

  // calculate and display the result
  long long res = 1;
  for (int i = 1; i <= userValue; i++)
  {
    res *= i;
  }

  printf("%d! = %lld\n", userValue, res);
}
