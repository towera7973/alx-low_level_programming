#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 *The var  n will store a dif  value every time you run this program
 *The output of the program should be:
 *The string Last digit of, followed by n,followed by
 *
 *Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit is  %d and %d is greater than 5\n", n, n % 10);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("the last digit is %d and %d is less that 6 and not 0\n", n, n % 10);
	else
		 printf("Last digit is %d and %d is zero\n", n, n % 10);
	return (0);
}
