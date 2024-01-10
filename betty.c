#include "main.h"

/**
 * get_endianness - checks the endianness of machine
 * Return: 0 for BE, 1 for LE
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *s = (char *) &j;

	return (*s);
}
