#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers followed bya new line
  * @separator: string to be printed
  * @n: number of integers passed
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if (i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
