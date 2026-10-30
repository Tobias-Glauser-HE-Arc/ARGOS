// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN
int ex_0021_SumN(int a, int b)
{
  // exchange variables if they are not in the correct order
  if (a > b)
  {
    a += b;
    b = a - b;
    a = a - b;
  }

  int sum = 0;
  for (int i = a; i <= b; i++)
  {
    sum += i;
  }

  return sum;
}
