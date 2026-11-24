// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0183_CountViaPtr.h"

// Function definitions
// TODO: implement ex_0183_CountViaPtr
void ex_0183_CountViaPtr(int values[], int size, int target, int *count)
{
  *count = 0;

  for (int i = 0; i < size; i++)
  {
    if (values[i] == target)
    {
      *count += 1;
    }
  }
}
