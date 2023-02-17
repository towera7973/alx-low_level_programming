/*
 * Towera mndoli
 */
#include <stdio.h>

/**
 * main - printa program that prints all possible
 * different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 *
 * * Return: Always 0.
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 10; number1++)
	{
		for (number2 = 0; number2 < 10; number2++)
		{
			putchar((number1 % 10) + '0');
			putchar((number2 % 10) + '0');

			if (number1 == 8 && number2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
