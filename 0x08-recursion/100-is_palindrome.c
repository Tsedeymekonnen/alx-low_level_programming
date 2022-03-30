#include "main.h"
#include <stdio.h>
void int is_palindrome(char *s) {
    int i;
   int c=0;
   int n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
        return 1;
    else
        return 0;
}
