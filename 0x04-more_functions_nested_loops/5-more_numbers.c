#include "main.h"

/**
  * more_numbers - print 10 times numbers
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
