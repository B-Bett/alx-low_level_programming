#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: 1 (success)
 * On error, -1 is returned, and errno is set appropriate
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}
