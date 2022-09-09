#include <stdio.h>

/**
 *main - Print numbers from 00 - 99
 *Return:0 Success
 *
 */

int main(void)
{
	int i;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = (n + 1); i <= '9'; i++)
		{
			putchar(n);
			putchar(i);

			if (n != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
