// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h>

// Local includes
#include "ex_0013_SecondOrderEquation.h"

// Function definitions
void ex_0013_SecondOrderEquation(void)
{
  // Use the following messages
  // print with printf("%s", usage_message);
  const char *usage_message = "Compute solutions of an equation of the form ax^2 + bx + c = 0\n";
  // print with printf("%s", input_message);
  const char *input_message = "Please enter coefficients a, b, and c: ";
  // print with printf("%s", no_solution_message);
  const char *no_solution_message = "This equation has no solution.\n";
  // print with printf("%s", no_real_solution_message);
  const char *no_real_solution_message = "This equation has no real solution.\n";
  // print with printf("%s", linear_solution_message);
  const char *linear_solution_message = "The solution of this linear equation is: \n";
  // print with printf("%s", double_real_solution_message);
  const char *double_real_solution_message = "The double real solution of this equation is: \n";
  // print with printf("%s", two_real_solutions_message);
  const char *two_real_solutions_message = "The real solutions of this equation are: \n";
  // print with printf("%s", any_real_solution_message);
  const char *any_real_solution_message = "Any real is solution of this equation.\n";

  // TODO: read coefficients a, b and c, then print the real solutions of the equation
  double coefA = 0;
  double coefB = 0;
  double coefC = 0;

  int status = 0;
  const int nbExpectedValues = 3;
  do
  {
    printf("%s", usage_message);
    printf("%s", input_message);
    status = scanf(" %lf %lf %lf", &coefA, &coefB, &coefC);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  if (coefA == 0 && coefB == 0) {
    if (coefC == 0)
    {
      printf("%s", any_real_solution_message);
      return;
    }
    printf("%s", no_solution_message);
    return;
  }

  if (coefA == 0)
  {
    printf("%s", linear_solution_message);
    printf("x = %.4lf\n",
                0-coefC/coefB);
    return;
  }

  double discriminant = pow(coefB,2) - 4*coefA*coefC;

  if (discriminant < 0)
  {
    printf("%s", no_real_solution_message);
    return;
  }

  if (discriminant == 0)
  {
    printf("%s", double_real_solution_message);
    printf("x = %.4lf\n",
          0-coefB/(2*coefA));
    return;
  }

  printf("%s", two_real_solutions_message);
  printf("x1 = %.4lf\n"
          "x2 = %.4lf\n",
          0-(coefB-sqrt(discriminant))/(2*coefA),
          0-(coefB+sqrt(discriminant))/(2*coefA));
}
