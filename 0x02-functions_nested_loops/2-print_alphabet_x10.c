#include "main.h"
/*
 * print_alphabet_x10 - code to print lowercase 10 times
 * main - Entry point
 */
void print_alphabet_x10(void)
{
	char chr;
	int i;
	for ( i = 1; i <= 10; i++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
