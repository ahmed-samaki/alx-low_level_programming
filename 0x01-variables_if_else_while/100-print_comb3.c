#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n1 = 48;
	int n2 = 49;

	while (n1 <= 56)
	{
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if ((n1 != 56) || (n2 != 57))
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
	putchar('\n');
	return (0);
}
