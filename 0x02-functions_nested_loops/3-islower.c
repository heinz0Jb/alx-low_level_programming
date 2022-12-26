#include "main.h"
/*
 * _islower - check the input
 *
 * return - 1 if c is lowercase otherwise 0
 */
int _islower (int c)
	char a;
	a = (char)c;
{
	if( a  >= 97 && a <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
