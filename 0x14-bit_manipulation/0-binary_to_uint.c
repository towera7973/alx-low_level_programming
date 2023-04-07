#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int base = 1, increment  = 0;

	if (b == NULL)
		return (0);

	while (b[increment + 1])
	{
		if (b[increment] != '0' && b[increment] != '1')
			return (0);
		increment++;
	}

	while (increment >= 0)
	{
		res += ((b[i] - '0') * base);
		base *= 2;
		increment--;
	}


	return (res);

}
