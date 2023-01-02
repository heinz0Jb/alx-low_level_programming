/*
 * File - 1-memcpy.c
 */

#include "main.h"
/*
 * _memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for ( ; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	 return (dest);
}

