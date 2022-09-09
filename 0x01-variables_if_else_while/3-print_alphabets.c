#include <stdio.h>

/**
 *main - print alphabets in uppercase and lowercase
 *Return:0 successs
 */

int main(void)
{
	char lower = 'a';
	char upper = 'z';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
