#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: Integer variable that holds memory size
 * Return: Always 0 on success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
