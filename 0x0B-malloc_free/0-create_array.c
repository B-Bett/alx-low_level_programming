#include "main.h"
/*#include holberton.h*/
#include <stdlib.h>
/**
 * *create_array - create array of chars, and initialize them with spec. char
 * @c: char to initialize
 * @size: number of bytes to allocate
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
