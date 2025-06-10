#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0'); /* First putchar usage */

		if (digit < 9) /* Check if it's not the last digit */
		{
			putchar(','); /* Second putchar usage */
			putchar(' '); /* Third putchar usage */
		}
	}

	putchar('\n'); /* Fourth putchar usage */

	return (0);
}
