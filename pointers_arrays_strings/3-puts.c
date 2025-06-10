#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0') /* Loop until the null terminator */
	{
		_putchar(*str); /* Print the current character */
		str++;          /* Move to the next character */
	}
	_putchar('\n'); /* Print a new line at the end */
}
