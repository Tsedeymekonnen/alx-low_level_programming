#include "holberton.h"
/*  Write a function that gets the length of a prefix substring. */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	char *u = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				d++;
				break;
			}
		if (!(*--accept))
			break;
		accept = u;
	}
	return (d);
}
