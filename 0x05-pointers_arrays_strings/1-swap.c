#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 * @a: integer to be swap
 * @b: integer to be swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
