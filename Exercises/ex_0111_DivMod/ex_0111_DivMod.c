// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0111_DivMod.h"

// Function definitions
// TODO: implement ex_0111_DivMod
void ex_0111_DivMod(int dividend, int divisor, int *quotient, int *remainder)
{
  *quotient = dividend / divisor;
  *remainder = dividend % divisor;
}
