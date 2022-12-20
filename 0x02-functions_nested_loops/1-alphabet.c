#include <stdio.h>
/**
  * main -  Entry point
  * print_alphabet - prints lowercase alphabet
   */
void print_alphabet(void)
{
	for(int i=97; i<123; i++)
	{
		putchar(i);
		putchar('\n');
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
