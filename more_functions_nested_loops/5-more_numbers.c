#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times,
 * each on a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Loop 10 times */
	{
		for (j = 0; j <= 14; j++) /* Loop for numbers 0-14 */
		{
			if (j >= 10) /* For numbers 10-14, print the tens digit */
			{
				_putchar((j / 10) + '0'); /* First _putchar usage */
			}
			_putchar((j % 10) + '0'); /* Second _putchar usage */
		}
		_putchar('\n'); /* Third _putchar usage */
	}
}
