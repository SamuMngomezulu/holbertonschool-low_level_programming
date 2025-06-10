#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter; /* Declare a character variable to hold each letter */

	/* Loop through characters from 'a' to 'z' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /* Print the current letter (first putchar usage) */
	}

	putchar('\n'); /* Print a newline character (second putchar usage) */

	return (0);
}
