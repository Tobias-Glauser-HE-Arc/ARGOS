// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0115_ClampInplace.h"

// Function definitions
// TODO: implement ex_0115_ClampInplace
void ex_0115_ClampInplace(int *value, int min, int max)
{
  if (min > *value)
  {
    *value = min;
  }

  if (max < *value)
  {
    *value = max;
  }
}
