#include "main.h"

/**
  * print_number - function that prints an integer
  * @n: input integer
  */
void print_number(int n)
{
	unsigned int num;
/*check if number is negative*/
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
/* print number by recursion*/
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
