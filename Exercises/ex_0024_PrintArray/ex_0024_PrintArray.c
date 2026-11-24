// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0024_PrintArray.h"

// Function definitions
// TODO: implement ex_0024_PrintArray
void ex_0024_PrintArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d", array[i]);

    if (i != size -1)
    {
      printf(" ");
    }
  }
}