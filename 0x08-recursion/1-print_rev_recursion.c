#include "holberton.h"
#include <stdio.h>  
#include <string.h>  
/**
 *Write a function that prints a string in reverse.
 */


void  _print_rev_recursion(char *s)  
{  
     
    int i, len, temp;  
    len = strlen(str1); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = s[i];  
        s[i] = s[len - i - 1];  
        s[len - i - 1] = temp;  
    }  
}  
