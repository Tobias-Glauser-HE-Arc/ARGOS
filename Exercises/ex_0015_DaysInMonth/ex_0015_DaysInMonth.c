// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

#include <stdbool.h>

// Function definitions
void ex_0015_DaysInMonth(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter the number of the month (january=1, ... , december=12): ";

  // TODO: read a month number between 1 and 12, then print its number of days
  int monthNumber = 0;

  // get value
  bool inputValid = false;
  int nbExpectedValues = 1;
  do {
    printf("%s", input_message);
    int status = scanf(" %d", &monthNumber);

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
    if (inputValid && (monthNumber < 1 || monthNumber > 12))
    {
      inputValid = false;
    }
  } while (!inputValid);

  int numberOfDays = 0;
  switch (monthNumber)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      numberOfDays = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      numberOfDays = 30;
      break;
    default:
      numberOfDays = 28;
      break;
  }

  printf("Month %d has %d days.\n", monthNumber, numberOfDays);
}
