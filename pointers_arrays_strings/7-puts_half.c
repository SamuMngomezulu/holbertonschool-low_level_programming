#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * If the number of characters is odd, prints the last (length + 1) / 2 characters.
 * @str: A pointer to the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting index for printing */
	if (length % 2 == 0) /* Even length */
	{
		n = length / 2;
	}
	else /* Odd length */
	{
		n = (length + 1) / 2;
	}

	/* Print characters from the calculated starting index to the end */
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n'); /* Print a new line at the end */
}
