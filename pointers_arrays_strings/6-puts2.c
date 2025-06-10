#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first,
 * followed by a new line.
 * @str: A pointer to the string.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]); /* Print the current character */
		i += 2;           /* Move to the character after the next one */
	}
	_putchar('\n'); /* Print a new line at the end */
}
