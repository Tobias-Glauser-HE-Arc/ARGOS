// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

#include <stdbool.h>

// Function definitions
// TODO: implement ex_0027_Array2DSum
void ex_0027_Array2DSum(void)
{
  const int maxNbOfValues = 50;

  char lineMesssage[100];
  snprintf(lineMesssage, sizeof(lineMesssage), "Nb lines (max.%d): ", maxNbOfValues);
  int userNbOfLines = getNbOfValues(maxNbOfValues, lineMesssage);

  char columnsMessage[100];
  snprintf(columnsMessage, sizeof(columnsMessage), "Nb columns (max.%d): ", maxNbOfValues);
  int userNbOfColumns = getNbOfValues(maxNbOfValues, columnsMessage);

  int values[userNbOfLines][userNbOfColumns];

  for (int i = 0; i < userNbOfLines; i++)
  {
    for (int j = 0; j < userNbOfColumns; j++)
    {
      char message[100];
      snprintf(message, sizeof(message), "array[%d][%d]: ", i, j);
      values[i][j] = getValue(message);
    }
  }

  printf("Total sum: %d\n", sum2DArray(userNbOfLines, userNbOfColumns, (int*)values)); //(int*) explicit cast to pointer
}

int getNbOfValues(int maxNbOfValues, char inputMessage[])
{
  bool isValidNumber = false;
  const int nbExpectedValues = 1;
  int userNumber = 0;
  do
  {
    printf("%s", inputMessage);
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

int getValue(char inputMessage[])
{
  int status = 0;
  const int nbExpectedValues = 1;
  int userValue = 0;
  do
  {
    printf("%s", inputMessage);
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

int sumArray(int arraySize, int array[])
{
  int sum = 0;

  for (int i = 0; i < arraySize; i++)
  {
    sum += array[i];
  }

  return sum;
}

int sum2DArray(int numberOfRows, int numberOfColumns, int* array) // using a standard point to handle 2d arrays
{
  int sum = 0;

  for (int i = 0; i < numberOfRows; ++i)
  {
    sum += sumArray(numberOfColumns, array + (i * numberOfColumns));
  }

  return sum;
}
