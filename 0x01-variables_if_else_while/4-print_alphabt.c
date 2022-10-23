#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char me;

	for (me = 'a'  me <= 'z' , me++;)
	{
		if (me != 'q' && me != 'e')
		putchar(me);
	}
	putchar('/n');
	return (0);
}
