/*
 * file - 0-memset.c
 */
#include "main.h"
/*
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i=0;

	for ( ; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

