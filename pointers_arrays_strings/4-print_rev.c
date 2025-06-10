#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string to be reversed and printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string first */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Iterate from the last character back to the first */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n'); /* Print a new line at the end */
}
