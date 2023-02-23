#include "main.h"

/**
*print_line - print line
*@n: The character to print which is "_"
*
*/

void print_line(int n)
{
	int i;

	for (i = 0, i <= n, i++)
	{
		if n > 0
			_putchar("_");
	}
	_putchar("\n")
	return (0);
}
