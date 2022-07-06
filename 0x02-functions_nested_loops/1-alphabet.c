#include <stdio.h>
/**
  * main -  Entry point
  * print_alphabet - prints lowercase alphabet
   */
void print_alphabet(void)
{
	char chr = 'a';
	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
