// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0186_FindMaxPtr.h"

#include <stddef.h>

// Function definitions
// TODO: implement ex_0186_FindMaxPtr
int *ex_0186_FindMaxPtr(int *values, int size)
{
  int *biggestNumber = values;
  for (int i = 1; i < size; i++)
  {
    if (*(values + i) > *biggestNumber)
    {
      biggestNumber = values + i;
    }
  }

  return biggestNumber;
}
