#include <stdio.h>

/**
 *main - prints alhabets in lowercase
 *Return:0 success
 */

int main(void)
{
	char alpha = "a";

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('/n');

	return (0);
}
