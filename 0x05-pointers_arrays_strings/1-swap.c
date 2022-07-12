#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
