// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>

// Local includes
#include "ex_0018_Squares.h"

// Function definitions
// TODO: implement ex_0018_Square and ex_0018_Squares
int ex_0018_Square(int number)
{
  return number * number;
}

bool ex_0018_Squares(int number)
{
  if (number < 1 || number > 1000)
  {
    return false;
  }

  for (int i = 1; i <= number; i++)
  {
    printf("%d ", ex_0018_Square(i));
  }

  printf("\n");
  return true;
}
