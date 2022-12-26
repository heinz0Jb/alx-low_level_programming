#include "main.h"
/*
 * main - check the code
 * return - always 0
 *
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + 'o');
	r = _islower(108);
	_putchar(r + 'o');
	_puthcar('\n');
	return(0);
}
