#include "holberton.h"
#include <stdio.h>
#include "main.h"
/* Write a function that capitalizes all words of a string. */
char *cap_string(char *s)
{
	int i, j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
				for (j = 0; delimeters[j] != '\0'; j++)
					if (s[i] == delimeters[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
						s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
