#include "holberton.h"

/**
*Write a function that locates a character in a string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	

	for (unsigned int i; = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
