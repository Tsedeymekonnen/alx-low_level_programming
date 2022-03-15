#include "holberton.h"
julien@ubuntu:~/0x02$ cat 11-main.c
#include "main.h"
/**
 * add - a function that adds two integers and returns the result
 * @one: first number input
 * @two: second number input
 * Return: one + two
 */
int add(int one, int two)
{
	return (one + two);
}

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
