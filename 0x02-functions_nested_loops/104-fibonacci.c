#include <stdio.h>

/**
  * main - the sum of Even Fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int counter = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		++counter;
	}

	printf("%ld\n", sum);
	return (0);
}
