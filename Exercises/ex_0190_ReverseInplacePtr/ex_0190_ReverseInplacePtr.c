// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0190_ReverseInplacePtr.h"

// Function definitions
// TODO: implement ex_0190_ReverseInplacePtr
void ex_0190_ReverseInplacePtr(int *array, int size)
{
  int *end = array + size - 1;

  for (int i = 0; i < size/2; i++)
  {
    *(end - i) += *(array + i);
    *(array + i) = *(end - i) - *(array + i);
    *(end - i) -= *(array + i);
  }
}
