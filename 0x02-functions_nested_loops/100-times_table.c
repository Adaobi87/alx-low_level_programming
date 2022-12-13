#include "main.h"

/**
  * print_times_table - print n timestable
  *
  * @n: An input integer value
  *
  * Return: Nothing
  */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				_putchar(i * j);
			_putchar('\n');
		}
	}
}
