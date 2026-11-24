// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0188_ReverseArrayPtr.h"

// Function definitions
// TODO: implement ex_0188_ReverseArrayPtr
void ex_0188_ReverseArrayPtr(int *source, int *destination, int size)
{
  for (int i = size - 1; i >= 0; i--)
  {
    *(destination + (size - 1) - i) = *(source + i);
  }
}
