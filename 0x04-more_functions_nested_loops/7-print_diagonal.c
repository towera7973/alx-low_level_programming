#include "main.h"

/**
* print_diagonal - print diagonal with "\"
* @n: Times to print
*/
void print_diagonal(int n)
{
	int number1, number2;

	for (number1 = 0; number1 < n; number1++)
	{
		for (number2 = 0; number2 < number1; number2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
