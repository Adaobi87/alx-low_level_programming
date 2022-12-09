#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the number stored in a variable
 *
 * return: returns to 0
 */
int main(void)
{
	int n;
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("The number is positive: %d\n", n);
	else if (n = 0)
		printf("The number is zero: %d\n", n);
	else 
		printf("The number is negative: %d\n", n);
	return (0);
}
		

