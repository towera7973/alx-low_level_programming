/*
 * Towera mndoli
 */
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *  followed by a new line.
 *
 *  Return: always 0;
 */
int main(void)
{
	int Number;

	for (Number = 0; Number <= 9; Number++)
		printf("the numbers are %d,\n", Number);

	return (0);
}
