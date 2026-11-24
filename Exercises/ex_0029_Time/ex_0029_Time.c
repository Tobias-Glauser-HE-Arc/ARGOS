// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0029_Time.h"

// Function definitions
// TODO: implement ex_0029_InitTime
Time ex_0029_InitTime(int hh, int mm, int ss)
{
  return (Time){.hh = hh, .mm = mm, .ss = ss};
}

// TODO: implement ex_0029_PrintTime
void ex_0029_PrintTime(Time time)
{
  printf("%02d:%02d:%02d\n", time.hh, time.mm, time.ss); // 02 makes it display with a width of 2 and filling the gap with 0
}

// TODO: implement ex_0029_Time
void ex_0029_Time(void)
{
  ex_0029_PrintTime(ex_0029_InitTime(5,3,17));
}
