#include <stdio.h> /* Standard library allowed for this task */

/**
 * main - Prints numbers from 1 to 100, with Fizz/Buzz/FizzBuzz rules.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100) /* Print space after each number/word, except the last one */
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
