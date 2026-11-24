// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray
int ex_0025_FillArray(int array[], int max_capacity)
{
  int number_of_elements = 0;

  while (number_of_elements < max_capacity)
  {
    int user_number = ex_0025_GetUserInput();
    if (user_number < 0)
    {
      return number_of_elements;
    }

    array[number_of_elements] = user_number;
    number_of_elements += 1;
  }

  return number_of_elements;
}

int ex_0025_GetUserInput(void)
{
  int status = 0;
  const int nbExpectedValues = 1;
  int user_number = 0;
  do
  {
    status = scanf("%d", &user_number);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  // Also stopps if end of file
  if (status == EOF)
  {
    return -1;
  }

  return user_number;
}
