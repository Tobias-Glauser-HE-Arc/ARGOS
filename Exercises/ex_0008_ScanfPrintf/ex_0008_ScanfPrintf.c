// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void)
{
  // TODO: read 3 letters with scanf, then print their ASCII codes
  char char1 = 0;
  char char2 = 0;
  char char3 = 0;

  printf("\n\nPlease enter 3 letters:\n");
  scanf(" %c %c %c ", &char1, &char2, &char3);

  printf("\nHere are the corresponding ASCII codes:\n"
         "%c--------->%d\n"
         "%c--------->%d\n"
         "%c--------->%d\n",
         char1, char1, char2, char2, char3, char3);
}
