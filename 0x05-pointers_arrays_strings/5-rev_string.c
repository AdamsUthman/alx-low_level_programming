#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max i - 1;
	while (half >= 0)
	{
		first = s[macx - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}