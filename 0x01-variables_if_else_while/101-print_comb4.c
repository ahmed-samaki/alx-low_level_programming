#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;

	while (a <= 55)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if ((a != 55) || (b != 56) || (c != 57))
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	putchar('\n');
	return (0);
}
