#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet, followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter); /* First _putchar usage */
	}
	_putchar('\n'); /* Second _putchar usage */
}
