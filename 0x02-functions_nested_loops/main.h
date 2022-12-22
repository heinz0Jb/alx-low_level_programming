int _putchar( int i);

int print_alphabet(void)
{

	int counter= 97;

	while(counter < 123)
	{	
		_putchar(counter);
		counter++;
	}
	_putchar('\n');
}
