#include "main.h"
/*
 * print_alphabet - prints alphabet
 * return - no return
 */

void print_alphabet( void)
{
	char letter;
	for(letter = 'a'; letter<= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
