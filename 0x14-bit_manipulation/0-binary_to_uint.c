#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a pointer to the string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is not correctly formatted or NULL
 */

unsigned int binary_to_uint(const char *bin_number)
{
	unsigned int result = 0;
	unsigned int power = 1;
	int i = 0;

	if (bin_number)
	{
		while (bin_number[i])
		{
			if (bin_number[i] != '0' && bin_number[i] != '1')
				return (0);
			i++;
		}

		i = i - 1;
		while (i >= 0)
		{
			if (bin_number[i] == '1')
				result += power;
			i--;
			power += power;
		}
	}
	return (result);
}
