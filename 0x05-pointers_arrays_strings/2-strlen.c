#include "main.h"
#include <stdio.h>
/* Write a function that returns the length of a string. 
int _strlen(char *S)
{
	int T = 0;

	while (*S != '\0')
	{
		S++;
		T++;
	}
	return (T);
}
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
