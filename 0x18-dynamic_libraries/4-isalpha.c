#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checking for alphabetic character
 * @c: character
 * Return: 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
