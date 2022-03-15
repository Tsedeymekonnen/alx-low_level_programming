#include "holberton.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

  /**
 * main - check the code.
 *
 * Return: Always 0.
 */
void main(){
	int n, co;

	co = 0;


    for (int i=0;i<10;i++){
      
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
