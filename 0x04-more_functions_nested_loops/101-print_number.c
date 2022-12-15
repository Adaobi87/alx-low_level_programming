#include "main.h"

/**
  * print_number - function that prints integer
  *
  * @n: integer input
  */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
			_putchar(-n1);
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
	}
}		
