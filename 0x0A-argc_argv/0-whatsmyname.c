#include <stdio.h>
/**
 * main - prints its names, followed by anew line
 * @argc: number of command line arguments
 * @agrv: array that contains the program command line arguments
 * Return: 0 - success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	orintf("%s\n", argv[0]);
	return (0);
}
