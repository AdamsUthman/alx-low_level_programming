#include "hash_tables.h"

/**
 * key_index - function that generatesa distributed index
 * according to a given hash
 *
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == Null || size == 0)
		return (0);
}
