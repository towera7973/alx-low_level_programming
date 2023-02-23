#include "main.h"

/**
*print_square - use  2 and 10 as arguments to make squire with '#'
*@size: The character to print
*/

void print_square(int size)
{
	int i, number2;

	for (i = 0; number2 < size; i++)
	{
		for (number2 = 0; number2 < size; number2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
