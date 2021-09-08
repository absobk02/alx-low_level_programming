#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: char pointer variable
 * @src: char pointer variable
 * @n int type variable
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > 0)
		{
			dest[i] = src[j];
		}
		i++;
		n--;
	}

	return (dest);
}
