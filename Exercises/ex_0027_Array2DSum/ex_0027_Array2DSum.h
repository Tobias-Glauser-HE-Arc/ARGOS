// Author: HE-Arc

#ifndef EX_0027_ARRAY2DSUM_H
#define EX_0027_ARRAY2DSUM_H

// Standard includes

// Local includes

// Function prototypes
void ex_0027_Array2DSum(void);

/**
 * Gets from the user the number of values he wants in his array
 * @param maxNbOfValues Max number of values for an array
 * @param inputMessage Message to show at input
 * @return the number of values the user wants in his array
 */
int getNbOfValues(int maxNbOfValues, char inputMessage[]);

/**
 * Gets a value from the user. Informs the user about the number of the
 * value (which value) that he is going to enter
 * @param inputMessage Message to show at input
 * @return the value entered by the user
 */
int getValue(char inputMessage[]);

/**
 * Calculates the sum of an array
 * @param arraySize The size of the array to sum
 * @param array The array to sum
 * @return the sum of the array
 */
int sumArray(int arraySize, int array[]);

/**
* Calculates the sum of a 2D array
 * @param numberOfRows The number of rows the array has
 * @param numberOfColumns The number of columns the array has
 * @param array The array to sum
 * @return the sum of the 2D array
 */
int sum2DArray(int numberOfRows, int numberOfColumns, int* array);


#endif // EX_0027_ARRAY2DSUM_H
