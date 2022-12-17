#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
i* @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, p;

	for (i = 0; i < n; i++)
	{
		for (p = 0; p < i; p++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}

	_putchar('\n');
}
