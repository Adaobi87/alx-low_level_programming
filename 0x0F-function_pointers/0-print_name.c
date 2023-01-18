#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - function that prints name
  * @name: string as a name
  * @f: prointer to a function
  * Return: return nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
