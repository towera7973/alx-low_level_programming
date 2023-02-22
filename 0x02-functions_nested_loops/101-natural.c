#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int i, the_sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			the_sum += i;
		}

		i++;
	}

	printf("%d\n", the_sum);
	return (0);
}
