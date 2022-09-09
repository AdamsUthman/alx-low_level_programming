#include <stdio.h>

/**
<<<<<<< HEAD
 *main - print 00 to 99 
 *Return:0 Success
 *
=======
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
>>>>>>> c8fb9b3402ebd43d9033f35e3e270964c8529d9f
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*print tens place*/
	{
<<<<<<< HEAD
		for (ones = (tens + 1); ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones !+ '9')
=======
		for (ones = '0'; ones <= '9'; ones++) /*print ones place*/
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9')) /*skip comma at end*/
>>>>>>> c8fb9b3402ebd43d9033f35e3e270964c8529d9f
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
