#include "main.h"

/**
 * print_sign - check the sign of a number
 * @n: character to check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else
	(n < 0)
	}
		n = -1;
		_putchar('-');
	}
	return (n);
}
