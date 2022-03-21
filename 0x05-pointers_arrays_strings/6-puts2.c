
/* Write a function that prints every other character of a string, starting with the first character, followed by a new line. */
#include <stdio.h>
#include "main" 

void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
