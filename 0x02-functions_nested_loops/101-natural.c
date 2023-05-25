#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int i;
	int rslt;

	rslt = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			rslt += i;
		}
	}
	printf("%d\n", rslt);

	return (0);
}
