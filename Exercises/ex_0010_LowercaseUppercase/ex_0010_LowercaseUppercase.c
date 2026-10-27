// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

#include <stdbool.h>

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
    char userChar = 0;
    bool isValidChar = false;

    // Get the char
    do
    {
        printf("Type a letter: ");
        isValidChar = scanf("%c", &userChar) == 1 ? true : false;

        int c;
        do
        {
            c = getchar();
        } while (c != '\n' && c != EOF);

    } while (!isValidChar);

    // Interpret char
    if (userChar >= 97 && userChar <= 122)
    {
        printf("lowercase\n");
    } else if (userChar >= 65 && userChar <= 90)
    {
        printf("UPPERCASE\n");
    } else
    {
        printf("The character you entered is not a letter.\n");
    }
}
