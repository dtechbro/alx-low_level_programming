#include <stdio.h>

/**
 * main - Entry point
 * author: men
 * Return: Always 0 (Success)
 */
int main(void)
{
	char men;

	for (men = 'a'; men <= 'z'; men++)
	{
		if (men != 'q' && men != 'e')
			putchar(men);
	}
	putchar('\n');
	return (0);
}
