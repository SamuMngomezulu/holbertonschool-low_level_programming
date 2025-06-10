#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each on a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++) /* Loop 10 times */
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter); /* First _putchar usage */
		}
		_putchar('\n'); /* Second _putchar usage */
	}
}
