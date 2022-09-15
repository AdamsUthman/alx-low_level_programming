#include "main.h"

/**
 * print_line - Entry point of the function
 * @n: Determines the length of the line
 */

void print_line(int n)
{
	int counter = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (counter++ < n)
			_putchar('_');
		_putchar('\n');
	}
}
