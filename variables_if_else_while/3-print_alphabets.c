#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /* First putchar usage */
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter); /* Second putchar usage */
	}

	putchar('\n'); /* Third putchar usage */

	return (0);
}
