#include <stdio.h>

/**
 * print_alphabet - print alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
