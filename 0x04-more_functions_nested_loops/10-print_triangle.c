#include "main.h"
/**
 * print_triangle - checking for a digit
 * @size : integer type ,how big we want our triangle to be 
 * (thats how many # should we peint .
 * Return:void
 */
void print_triangle(int size)
{
	int i = 1, a;
	while (i <= size && size > 0)
	{
		a = 0;
		while (a < size - i)
		{
			_putchar(' ');
			a++;
		}
		a = 0;
		while (a < i)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
