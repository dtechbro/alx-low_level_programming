#include <stdio.h>

/**
 * main - program compilation begins from main
 * Return: 0 means success
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <=57; i++)
	{
		for (j = 49; j <= 57; j++)
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
