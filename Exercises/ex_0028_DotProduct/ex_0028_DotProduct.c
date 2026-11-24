// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0028_DotProduct.h"

// Function definitions
// TODO: implement ex_0028_DotProduct
int ex_0028_DotProduct(int uVector[], int vVector[], int vectorSize)
{
  int result = 0;

  for (int i = 0; i < vectorSize; i++)
  {
    result += vVector[i] * uVector[i];
  }

  return result;
}