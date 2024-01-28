#include"main.h"

/**
 * swap_int - swap two integers
 *
 * @a: first integer
 * @b: second intzger
*/

void swap_int(int *a, int *b)
{
	int j;

	j = *b;
	*b = *a;
	*a = j;
}
