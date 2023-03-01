#include "main.h"

/**
 *print_number - Write a function that prints an intege
 *You can only use _putchar function to print
 * You are not allowed to use long
 * @n:
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
