// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0114_AccumulateStats.h"

// Function definitions
// TODO: implement ex_0114_AccumulateStats
void ex_0114_AccumulateStats(int values[], int count, int *sum, double *mean)
{
  *sum = 0;
  *mean = 0;

  for (int i = 0; i < count; i++)
  {
    *sum += values[i];
  }

  *mean = *sum / (double)count;
}
