#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp; /* Declare a temporary variable */

	temp = *a; /* Store the value of a in temp */
	*a = *b;   /* Assign the value of b to a */
	*b = temp; /* Assign the stored value (original a) to b */
}
