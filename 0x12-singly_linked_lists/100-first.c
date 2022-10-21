#include <stdio.h>

/**
 * bmain - funtion executed before main
 * Return: no return
 */

void __attribute_ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must alllow");
	printf(",\nI bore my house upon my back!\n);
}
