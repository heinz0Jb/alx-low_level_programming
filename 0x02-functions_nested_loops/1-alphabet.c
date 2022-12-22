#include "main.h"
/*
 * print_alphabet - prints alphabet in small letter
 * return - returns 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
