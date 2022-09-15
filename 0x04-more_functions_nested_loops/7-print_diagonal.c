#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: The number of times the diagonal line will be drawn
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
