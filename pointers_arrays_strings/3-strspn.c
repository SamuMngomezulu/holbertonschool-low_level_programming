#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be analyzed.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of 's' which consist
 * only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0; /* Flag to check if current s[i] is in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++; /* Character found in accept, increment count */
				match = 1;
				break;   /* Move to the next character in s */
			}
		}
		if (match == 0)
		{
			/* If s[i] is not found in accept, stop */
			break;
		}
	}
	return (count);
}
