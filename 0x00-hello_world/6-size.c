#include <stdio.h>

/**
 *Write a C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return a 0
 */
int main(void)
{
	printf("char size: %zu byte(s)\n", sizeof(char));
	printf("an int size: %zu byte(s)\n", sizeof(int));
	printf("float size: %zu byte(s)\n", sizeof(float));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

	return (0);
}
