#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * Letters a and A should be replaced by 4.
 * Letters e and E should be replaced by 3.
 * Letters o and O should be replaced by 0.
 * Letters t and T should be replaced by 7.
 * Letters l and L should be replaced by 1.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++) /* Loop through the string */
	{
		for (j = 0; leet_letters[j] != '\0'; j++) /* Loop through leet mapping */
		{
			if (s[i] == leet_letters[j])
			{
				s[i] = leet_numbers[j];
				break; /* Move to the next character in s */
			}
		}
	}
	return (s);
}
