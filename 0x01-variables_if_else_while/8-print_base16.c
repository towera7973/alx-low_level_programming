#include <stdio.h>

/**
 * main - Write a program that prints all #s  of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number <= 9; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
