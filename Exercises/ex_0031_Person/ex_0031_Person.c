// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <string.h>

// Local includes
#include "ex_0031_Person.h"

// Function definitions
// TODO: implement ex_0031_Person
void ex_0031_Person(void)
{
  Person person[10] = {
    {.name = "Knuth", .surname = "Donald", .birthYear = 1938},
    {.name = "Kernighan", .surname = "Brian", .birthYear = 1942},
    {.name = "Ritchie", .surname = "Dennis", .birthYear = 1941},
    {.name = "Thompson", .surname = "Ken", .birthYear = 1943},
    {.name = "Minsky", .surname = "Marvin", .birthYear = 1927},
    {.name = "Dijkstra", .surname = "Edsger", .birthYear = 1930},
    {.name = "Stroustrup", .surname = "Bjarne", .birthYear = 1950}
  };

  int size = 0;
  while (size < sizeof(person) / sizeof(person[0]))
  {
    if (strcmp(person[size].name, "") != 0 || strcmp(person[size].surname, "") != 0 || person[size].birthYear != 0)
    {
      ++size;
    } else
    {
      break;
    }
  }

  printf("%d Persons\n", size);

  printf("Persons less than 80 years old:\n");
  for (int i = 0; i < size; ++i)
  {
    if (person[i].birthYear > (2020 - 80))
    {
      printf("%s %s %d years\n", person[i].surname, person[i].name, 2020 - person[i].birthYear);
    }
  }

  printf("\nAlphabetic order:\n");
  Person first = person[0];
  Person last = person[0];

  for (int i = 1; i < size; ++i)
  {
    if (strcmp(person[i].name, first.name) < 0)
    {
      first = person[i];
    }

    if (strcmp(person[i].name, last.name) > 0)
    {
      last = person[i];
    }
  }

  printf("The first is: %s\n", first.name);
  printf("The last is: %s\n", last.name);
}
