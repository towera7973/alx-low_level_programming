#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random # to the variable n each time it is executed.
 *  Complete the source code in order to print whether the
 *  number stored in the variable n is + or -.
 *Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)

		printf("%d is negative\n", n);
	else if (n > 0)

		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
