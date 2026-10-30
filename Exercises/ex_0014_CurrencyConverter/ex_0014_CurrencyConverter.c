// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h> // for bool, true, false

// Local includes
#include "ex_0014_CurrencyConverter.h"

// Function definitions
void ex_0014_CurrencyConverter(void) {
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "USAGE: non-negative value [W | $ | Y | P]\n"
      "Won = W  Dollar = $  Yen = Y  Pound = P\n"
      "Please enter the amount to convert: ";
  // print with printf("%s", error_message);
  const char *error_message = "The input format is not correct!!\n";
  // print with printf("%s", unsupported_currency_message);
  const char *unsupported_currency_message = "Unsupported currency!!\n";
  // print with printf("%s", negative_amount_message);
  const char *negative_amount_message = "The input amount is negative!!\n";

  // TODO: read an amount and a currency, validate them, then convert to Swiss francs
  const double WON2CHF = 0.00070;
  const double USD2CHF = 0.99;
  const double YEN2CHF = 0.0067;
  const double POUND2CHF = 1.13;


  double amount = 0;
  char currency = 0;

  bool inputValid = false;
  int nbExpectedValues = 2;

  do {
    printf("%s", input_message);
    int status = scanf(" %lg %c", &amount, &currency);

    inputValid = status == nbExpectedValues || status == EOF;

    // flush stdin
    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }

    // check values
    if (!inputValid) {
      printf("%s", error_message);
    } else
    {
      if (currency != 'W' && currency != '$' && currency != 'Y' && currency != 'P') {
        printf("%s", unsupported_currency_message);
        inputValid = false;
      }
      if (amount < 0) {
        printf("%s", negative_amount_message);
        inputValid = false;
      }
    }
  } while (!inputValid);

  printf("Swiss francs: ");

  switch (currency) {
    case 'W':
      printf("%.3lf\n", WON2CHF * amount);
      break;

    case '$':
      printf("%.3lf\n", USD2CHF * amount);
      break;

    case 'Y':
      printf("%.3lf\n", YEN2CHF * amount);
      break;

    case 'P':
      printf("%.3lf\n", POUND2CHF * amount);
      break;
    default:
      break;
  }
}
