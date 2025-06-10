#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte,
 * to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Loop through the source string until the null terminator is found */
	while (src[i] != '\0')
	{
		dest[i] = src[i]; /* Copy each character */
		i++;
	}
	dest[i] = '\0'; /* Copy the null terminator */

	return (dest); /* Return the pointer to dest */
}
