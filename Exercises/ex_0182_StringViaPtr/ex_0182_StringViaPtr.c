// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0182_StringViaPtr.h"

// Function definitions
// TODO: implement ex_0182_StringViaPtr
int ex_0182_StringViaPtr(const char *text)
{
  int number_of_char = 0;

  while (*text != '\0')
  {
    number_of_char++;
    text++;
  }

  return number_of_char;
}
