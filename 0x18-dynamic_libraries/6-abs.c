#include "main.h"

/**
  * _abs - compute the absolute value of an interger
  *
  * @i: input number as an interger
  *
  * Return: absolute value
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
