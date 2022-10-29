#include <stdio.h>

/**
 * main - compilation start from main
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j < 10; j++)
		{
			if (i != j && j > i)
			{
				putchar(i);
				putchar(j);
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
