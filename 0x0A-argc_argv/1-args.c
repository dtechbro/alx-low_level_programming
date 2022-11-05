#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
