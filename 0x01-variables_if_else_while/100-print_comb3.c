#include <stdio.h>

/**
 * main - Entry point
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j < 10; j++)
		{
			if (i != j && i > j)
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
