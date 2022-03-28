#include "main.h"

/**
* swap_int - swaps the value of two integer
* @a: integer 1 pointer
* @b: integer 2 pointer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int y = *a;

	*a = *b;
	*b = y;
}
