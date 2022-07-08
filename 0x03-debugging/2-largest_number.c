#include "main.h"                                              

/**                                                            

* largest_number - returns the largest of 3 numbers            

* Return: largest number                                       

*/                                                             

                                                               

int largest_number(int a. int b, int c)                        

{                                                              

        int largest;                                           

                                                               

        if (a > b && b > c || a > c && c > b)
	{
		largest = a;
	}
	else if (b > a && a > c || b > c && c > a)
	{
		largest = b;
	}
	else if (c > a && a > b || c > b && b > a)
	{
		largest = c;
	}
	else
	{
		return (-1);
	}
	return (largest);
}
