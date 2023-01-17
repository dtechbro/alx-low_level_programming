#include <stdio.h>

/**
 * fibonacci - calculate the n-th Fibonacci number
 * @n: the index of the Fibonacci number to calculate
 *
 * Return: the n-th Fibonacci number
 */
unsigned long fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    unsigned long sum = 0;
    int i = 1;

    while (1)
    {
        unsigned long fib = fibonacci(i);

        if (fib > 4000000)
            break;

        if (fib % 2 == 0)
            sum += fib;

        i++;
    }

    printf("%lu\n", sum);

    return (0);
}
