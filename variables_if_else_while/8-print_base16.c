#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0'); /* First putchar usage (for digits 0-9) */
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch); /* Second putchar usage (for letters a-f) */
	}

	putchar('\n'); /* Third putchar usage */

	return (0);
}
