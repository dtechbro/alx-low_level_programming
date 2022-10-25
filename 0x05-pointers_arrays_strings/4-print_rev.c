#include "main.h"
/**
 * print_rev - The function print a string in reversed order
 * @s: pointer parameter
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != "\0")
		i++;
	for (i = i - 1; 1 >= 0; i--)
		_putchar(s[i]);

	_putchar("\n")
}
