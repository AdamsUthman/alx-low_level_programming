#include <stdio.h>

/**
 *main - print combination of three numbers
 *Return:0 Success
 *
 */

int main(void)
{
	int o;
	int t;
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		for (t = (h + 1); t <= '9'; t++)
		{
			for (o = (t + 1); o <= '9'; o++)
			{
				putchar(h);
				putchar(t);
				putchar(o);
				if (h != '7' || t != '8' || o != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
