// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0110_Minmax.h"

// Function definitions
// TODO: implement ex_0110_Minmax
void ex_0110_Minmax(int a, int b, int c, int *min, int *max)
{
  const int table[3] = {a, b, c};
  *min = table[0];
  *max = table[0];

  for (int i = 1; i < 3; i++)
  {
    if (*min > table[i])
    {
      *min = table[i];
    }
    if (*max < table[i])
    {
      *max = table[i];
    }
  }
}
