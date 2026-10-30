// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0009_Circle.h"

#include <math.h>
#include <stdbool.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void)
{
  double radius = 0;

  // Get radius from user
  int status = 0;
  const int nbExpectedValues = 1;
  bool validEntry = false;
  do
  {
    printf("Circle radius: ");
    status = scanf(" %lf", &radius);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }

    validEntry = !(status != nbExpectedValues && status != EOF);

    // Radius must be >= 0
    validEntry = validEntry && (radius >= 0);
  } while (!validEntry);

  // Print value of pi and circle surface
  printf("pi = %lf\n", M_PI);
  printf("Circle surface = %.2lf\n", M_PI * pow(radius, 2));
}
