#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description- prints single digits of
 * base 10
 *
 * return: Always 0 (sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

