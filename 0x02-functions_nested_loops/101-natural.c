#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int a = 0, b = 0;
		for (a = 0; a < 1024; a++)
		{
			if ((a % 5) == 0 || (a % 3) == 0)
				b += a;
		}
	printf("%d\n", b);

	return (0);
}
