#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the start of the code
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() % 201 - 100; /*- RAND_MAX / 2*/
	m = n % 10
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
