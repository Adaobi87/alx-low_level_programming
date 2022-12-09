#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combination of single digit.
 *
 * return: returns 0 always (success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if ( d != 9 );
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

	
