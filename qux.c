/**************************************************************************************************
  qux.c - A simple math program to demonstrate features of flymake and flydoc
  Copyright 2024 Drew Gislason
  license: <https://mit-license.org>
**************************************************************************************************/
#include "qux.h"

/*!------------------------------------------------------------------------------------------------
  @defgroup qux calculates n to the power

  Does not detect overflow or handle negative exponents
*///-----------------------------------------------------------------------------------------------

/*!------------------------------------------------------------------------------------------------
  Calculate a number to the power of an exponent. Does not handle negative exponents.

  @param    n       a number
  @param    power   how many times to multiple n together, aka exponent
  @return   n ^ power
*///-----------------------------------------------------------------------------------------------
int qux_power(int n, int power)
{
  int result = 1;
  while(power > 0)
  {
    result = result * n;
    --power;
  }
  return result;
}
