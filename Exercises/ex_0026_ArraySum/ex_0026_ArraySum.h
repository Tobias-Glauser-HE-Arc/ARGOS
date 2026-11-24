// Author: HE-Arc

#ifndef EX_0026_ARRAYSUM_H
#define EX_0026_ARRAYSUM_H

// Standard includes

// Local includes

// Function prototypes
void ex_0026_ArraySum(void);

/**
 * Gets from the user the number of values he wants in his array
 * @param maxNbOfValues Max number of values for an array
 * @return the number of values the user wants in his array
 */
int getNbOfValues(int maxNbOfValues);

/**
 * Gets a value from the user. Informs the user about the number of the
 * value (which value) that he is going to enter
 * @param valueNumber Number of the value to get
 * @return the value entered by the user
 */
int getValue(int valueNumber);

/**
 * Displays an array of int
 * @param array the array to display
 * @param arraySize the size of the array to display
 */
void displayArray(int array[], int arraySize);

/**
 * Calculates the sum of an array
 * @param array The array to sum
 * @param arraySize The size of the array to sum
 * @return the sum of the array
 */
int sumArray(int array[], int arraySize);

#endif // EX_0026_ARRAYSUM_H
