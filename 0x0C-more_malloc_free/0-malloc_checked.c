#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - creates an array of integers.
 * @b: input.
 * Return: Output.
 */
void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);

	if (g == NULL)
		exit(98);

	return (g);
}
