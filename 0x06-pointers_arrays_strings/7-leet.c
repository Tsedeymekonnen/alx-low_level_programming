/* Write a function that encodes a string into 1337. */
#include "holberton.h"
#include <stdio.h>
#include "main"
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
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
