#include <stdio.h>
/**
 * main - print all possible different combinations of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 55; n++)
	{
		for (m = 49; m < 54; m++)
		{
			for (l = 50; l < 54; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
