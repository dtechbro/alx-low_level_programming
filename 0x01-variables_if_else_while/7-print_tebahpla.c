#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters <= 'a'; letters--)
	{
		printf("%c", letters);
	}
	printf('\n');
	return (0);
}
