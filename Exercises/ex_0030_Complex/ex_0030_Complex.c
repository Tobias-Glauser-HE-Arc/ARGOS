// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0030_InputComplex, ex_0030_SumComplex, ex_0030_DiffComplex, ex_0030_PrintComplex and ex_0030_Complex
Complex ex_0030_InputComplex(void)
{
  int status = 0;
  const int nbExpectedValues = 2;

  Complex complexNumber;

  do
  {
    printf("Please enter a complex number (r,i): ");
    status = scanf(" ( %lf ,%lf )", &complexNumber.real, &complexNumber.imaginary);
    //--> détecter un closing caractère
    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  return complexNumber;
}

Complex ex_0030_SumComplex(Complex complexA, Complex complexB)
{
  return (Complex) {.real = (complexA.real + complexB.real), .imaginary = (complexA.imaginary + complexB.imaginary)};
}

Complex ex_0030_DiffComplex(Complex complexA, Complex complexB)
{
  return (Complex) {.real = (complexA.real - complexB.real), .imaginary = (complexA.imaginary - complexB.imaginary)};
}

void ex_0030_PrintComplex(Complex complexNumber)
{
  printf("%.2lf + %.2lfi\n", complexNumber.real, complexNumber.imaginary);
}

void ex_0030_Complex(void)
{
  Complex complexA = ex_0030_InputComplex();
  Complex complexB = ex_0030_InputComplex();

  printf("\nSum = ");
  ex_0030_PrintComplex(ex_0030_SumComplex(complexA, complexB));
  printf("\nDiff = ");
  ex_0030_PrintComplex(ex_0030_DiffComplex(complexA, complexB));
}
