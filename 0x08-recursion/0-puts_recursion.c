#include "towera.h"
/**
 * _puts_recursion - puts a string to stdout recursively
 *
 * @s: string to put to stdout
 *
 * Return: always void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* if s points to null char */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
