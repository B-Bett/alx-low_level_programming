#include <unistd.h>

/**
 * _putchar - write the characcter c to stdout
 * @c: the charater to print
 * Return:1 (success)
 * On error, -1 is return and errno is set approppriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

