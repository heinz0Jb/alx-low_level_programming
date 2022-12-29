#include "main.h"
/*
 * print_sign - prints the sign of a number
 *
 * return - 1 if n is grrater than 0, 0 if n is 0, -1 if n is less than 0
 */
int print_sign(int c)
{
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (c = 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c > 0)
	{
		_putchar('+');
		return (1);
	}
}

