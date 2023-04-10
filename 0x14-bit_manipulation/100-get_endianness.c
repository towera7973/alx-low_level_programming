/*
 * File: 100-get_endianness.c
 * Auth: Towera Mndoli
 */

#include "main.h"

/**
 * get_endianness - The get_endianness function takes 
 * no arguments and returns an integer value that indicates 
 * whether the system is big endian or little endian..
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
