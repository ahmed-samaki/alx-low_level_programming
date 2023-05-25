#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, i, next;

	printf("%ld, %ld, ", num1, num2);

	for (i = 3; i <= 50; i++)
	{
		next = num1 + num2;

		if (i != 50)
		{
			printf("%ld, ", next);
		}
		else
		{
			printf("%ld", next);
		}

		num1 = num2;
		num2 = next;

	}

	printf("\n");
	return (0);
}
