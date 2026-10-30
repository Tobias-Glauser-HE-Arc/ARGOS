// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0022_Invert.h"

// Function definitions
// TODO: implement ex_0022_Invert
int ex_0022_Invert(int baseNumber)
{
  if (baseNumber < 0)
  {
    return -1;
  }

  int newNumber = 0;
  while (baseNumber > 0)
  {
    newNumber *= 10;
    newNumber += baseNumber % 10;
    baseNumber /= 10;
  }

  return newNumber;
}
