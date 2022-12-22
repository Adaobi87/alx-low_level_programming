#include "main.h"

/**
  * _strncpy - function that copies a string
  * @dest: pointer to destimnation string
  * @src: pointer to source string
  * @n: number of bytes to be used
  * Return: points to destinstion string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int bytecount;

	for (bytecount = 0; bytecount < n && src[bytecount] != '\0'; bytecount++)
	{
		dest[bytecount] = src[bytecount];
	}
	for (; bytecount < n; bytecount++)
	{
		dest[bytecount] = '\0';
	}
		return (dest);
}
