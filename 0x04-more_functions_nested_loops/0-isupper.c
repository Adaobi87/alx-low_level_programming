#include "main.h"

/**
  * _isupper - check for uppercase character
  *
  * @c: is an integer parameter
  *
  * Return: 1 for uppercase and 0 for otherwise
  */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
