#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: A pointer to the string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from start and end, moving towards the middle */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
