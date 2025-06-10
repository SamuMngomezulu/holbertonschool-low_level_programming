#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize the first character if it's a letter */
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	/* Iterate through the string */
	while (s[i] != '\0')
	{
		if (is_separator(s[i])) /* If current char is a separator */
		{
			/* Check the next character */
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32; /* Capitalize it */
			}
		}
		i++;
	}
	return (s);
}
