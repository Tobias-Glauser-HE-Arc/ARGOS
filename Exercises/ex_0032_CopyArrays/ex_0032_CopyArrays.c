// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0032_CopyArrays.h"

// Function definitions
// TODO: implement ex_0032_CopyArrays
void ex_0032_CopyArrays(const int *src, int *dest, int n)
{
  for (int i = 0; i < n; i++)
  {
    dest[i] = src[i];
  }
}
