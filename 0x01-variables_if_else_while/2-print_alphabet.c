#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');
	return (0);
}

