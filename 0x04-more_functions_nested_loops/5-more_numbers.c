#include "main.h"

/**
  * more_numbers - print numbers 0 to 14
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i >= 10)i
				_putchar((i / 10) +'0');
		}
		_putchar((i % 10) + '0');
	}
}
