#include "main.h"

/**
  * print_line - draw a straight line
  *
  * @n: integer parameter
  */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar(95);
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n')
}
