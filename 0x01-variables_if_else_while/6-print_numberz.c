#include <stdio.h>
/**
 * main - print numbers from 0 to 9 without char
 * Return: 0 (succes)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
