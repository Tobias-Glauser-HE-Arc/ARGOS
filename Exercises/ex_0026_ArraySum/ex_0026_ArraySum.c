// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>

// Local includes
#include "ex_0026_ArraySum.h"

// Function definitions
// TODO: implement ex_0026_ArraySum
void ex_0026_ArraySum(void)
{
  const int maxNbOfValues = 50;
  int userNbOfValues = getNbOfValues(maxNbOfValues);

  int values[userNbOfValues];

  for (int i = 0; i < userNbOfValues; i++)
  {
    values[i] = getValue(i);
  }

  printf("array:\n");
  displayArray(values, userNbOfValues);
  printf("Total sum: %d\n", sumArray(values, userNbOfValues));
}

int getNbOfValues(int maxNbOfValues)
{
  bool isValidNumber = false;
  const int nbExpectedValues = 1;
  int userNumber = 0;
  do
  {
    printf("Nb values (max.%d): ", maxNbOfValues);
    int status = scanf("%d", &userNumber);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }

    isValidNumber = status == nbExpectedValues || status == EOF;

    if (isValidNumber && (userNumber < 0 || userNumber > maxNbOfValues))
    {
      isValidNumber = false;
    }

  } while (!isValidNumber);

  return userNumber;
}

int getValue(int valueNumber)
{
  int status = 0;
  const int nbExpectedValues = 1;
  int userValue = 0;
  do
  {
    printf("Value %d? ", valueNumber);
    status = scanf("%d", &userValue);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  return userValue;
}

void displayArray(int array[], int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    printf("%d", array[i]);

    if (i < arraySize - 1)
    {
      printf(" ");
    }
  }

  printf("\n");
}

int sumArray(int array[], int arraySize)
{
  int sum = 0;

  for (int i = 0; i < arraySize; i++)
  {
    sum += array[i];
  }

  return sum;
}
