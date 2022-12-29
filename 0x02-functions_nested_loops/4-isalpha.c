#include "main.h"
/*
 * _isalpha - print alphabet letters
 *
 * return - 1 if c is a letter or 0 otherwise
 */
char _isalpha(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >=97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

