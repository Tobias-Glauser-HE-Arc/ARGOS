// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

#include <stdbool.h>

// Function definitions
void ex_0016_SumProductMean(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "Number of values to read: ";
  // print with printf(value_message, i); where i is the value number, starting at 1
  const char *value_message = "%d. number: ";

  // TODO: read N (between 1 and 15), then N integers, and print their sum, product and mean
  int numberOfValues = 0;

  // get number of values
  bool inputValid = false;
  int nbExpectedValues = 1;
  do {
    printf("%s", input_message);
    int status = scanf(" %d", &numberOfValues);

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
    if (inputValid && (numberOfValues < 1 || numberOfValues > 15))
    {
      inputValid = false;
    }
  } while (!inputValid);

  int product = 1;
  int sum = 0;

  // get values
  for (int i = 1; i <= numberOfValues; i++)
  {
    int input = 0;
    int status = 0;
    const int nbExpectedValues = 1;
    do
    {
      printf(value_message, i);
      status = scanf(" %d", &input);

      {
        int c;
        do
        {
          c = getchar();
        } while (c != '\n' && c != EOF);
      }
    } while (status != nbExpectedValues && status != EOF);

    product *= input;
    sum += input;
  }

  // print values
  printf("Sum = %d\n"
          "Product = %d\n"
          "Mean = %.4lf\n", sum, product, sum / (double)numberOfValues);
}
