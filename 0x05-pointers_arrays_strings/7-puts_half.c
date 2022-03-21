/* Write a function that prints half of a string, followed by a new line.*/
#include <stdio.h>
#include "main"
void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
