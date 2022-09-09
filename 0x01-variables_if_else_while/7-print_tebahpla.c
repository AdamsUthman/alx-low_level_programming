#include <stdio.h>

/**
 *main - print alphabets in reverse
 *Return:0 Sucess
 */

int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');

	return (0);
}
