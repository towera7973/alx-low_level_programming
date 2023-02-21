#include "main.h"
/**
  * _islower - Checks for lowercase character
  * @B: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int B)
{
	if (B >= 97 && B <= 122)
	{
		return (1);
	}

	return (0);
}
