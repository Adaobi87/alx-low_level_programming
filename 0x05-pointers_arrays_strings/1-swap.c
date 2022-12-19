#include "main.h"

/**
  * swap_int - swap the value of two integers
  * @a: the first input integer
  * @b: the second input integer
  */
void swap_int(int *a, int *b);
{
	int c = *a;
	*a = *b;
	*b = c;
}
