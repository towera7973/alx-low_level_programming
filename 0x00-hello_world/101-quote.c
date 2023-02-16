#include <unistd.h>

/**
 *let the  main  function  Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *   followed by a new line, to standard error.
 *
 * let it retuen 1 instead of 0 
 * the function to use is write 
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);

	return (1);
}
