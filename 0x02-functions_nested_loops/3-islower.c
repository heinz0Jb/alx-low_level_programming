#include "main.h"
/*
 * _islower - check the input
 *
 * return - 1 if c is lowercase otherwise 0
 */
char _islower (char c)
{
	if( c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
	
