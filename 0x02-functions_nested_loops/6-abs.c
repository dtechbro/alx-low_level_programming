#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @n: integer
 * Return: unsigned int value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
