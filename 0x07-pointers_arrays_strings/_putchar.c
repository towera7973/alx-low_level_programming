#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the output c to std output
 * @c: character to be returned
 * Return: 1 on successful
 * On error 1, is reset
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
