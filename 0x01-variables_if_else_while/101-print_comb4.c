#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * return: returns Always 0 (success)
 */

int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			if ((p != d))
			{
				putchar(d);
				putchar(p);
				
				if (d == '7' && p == '8')
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
			
		
	
	



				
				

