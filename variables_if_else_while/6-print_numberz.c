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
		putchar(digit + '0'); /* First putchar usage (no char variable) */
	}

	putchar('\n'); /* Second putchar usage */

	return (0);
}
