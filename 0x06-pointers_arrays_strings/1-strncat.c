#include "main.h"

/**
  * _strncat - function that concatenate two strings
  * @dest: first parameter
  * @src: 2nd parameter
  * @n: number of bytes to be concatenated
  * Return: pointer to destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[length] = src[j];
	}
		dest[length] = '\0';
		return (dest);
}
