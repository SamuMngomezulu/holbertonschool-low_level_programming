#include "main.h"

/**
 * print_triangle - Prints a triangle using the '#' character.
 * @size: The size of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++) /* Loop for each row (height) */
		{
			/* Print spaces */
			for (space = (size - row); space > 0; space--)
			{
				_putchar(' ');
			}
			/* Print '#' characters */
			for (col = 0; col < row; col++)
			{
				_putchar('#');
			}
			_putchar('\n'); /* Newline after each row */
		}
	}
}
