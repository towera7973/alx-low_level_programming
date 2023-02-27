#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * @i: cintainer to keep a value to be swapped
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
