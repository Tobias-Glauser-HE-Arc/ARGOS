// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator
double ex_0020_Calculator(double numberOne, double numberTwo, char operation)
{
  if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
  {
    return .0;
  }

  if (operation == '/' && numberTwo == 0)
  {
    return .0;
  }

  switch (operation)
  {
    case '+':
      return numberOne + numberTwo;
      break;
    case '-':
      return numberOne - numberTwo;
      break;
    case '*':
      return numberOne * numberTwo;
      break;
    default:
      return numberOne / numberTwo;
  }
}
