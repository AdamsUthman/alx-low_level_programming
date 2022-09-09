#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef
 *Return:0 success
 */

int main(void)
{
	int n = '0';
	int lett = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (lett <= 'f')
	{
		putchar(lett);
		lett++;
	}
	putchar('\n');

	return (0);
}
