
#include "main.h"

/**
 * flip_bits - Counts the  number of bits that need
 *to be flipped to transform n into m with count variable bits=0.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference  = n ^ m, bits = 0;

	while (difference != 0)
	{
		bits += (difference & 1);
		difference >>= 1;
	}

	return (bits);
}
