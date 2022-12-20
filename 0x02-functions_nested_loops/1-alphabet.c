#include <stdio.h>
/**
  * main -  Entry point
  * print_alphabet - prints lowercase alphabet
   */
void print_alphabet(void)
{
	int i=97;
	while(i<123)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
