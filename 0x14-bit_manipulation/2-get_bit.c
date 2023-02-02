#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @index: index starting 0 of the bit
  * @n: number to check bits in
  * Return: value of the bit, or -1 if an error occurred.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
