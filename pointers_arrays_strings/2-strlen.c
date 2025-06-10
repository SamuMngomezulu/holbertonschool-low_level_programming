#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0; /* Initialize length counter */

	while (*s != '\0') /* Loop until the null terminator is found */
	{
		length++; /* Increment length for each character */
		s++;      /* Move to the next character in the string */
	}
	return (length);
}
