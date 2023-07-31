#include "main.h"
/**
 * _memcpy - function copy @n bytes from memory area @src to memory area @dest
 * @n: funtion to be copppied
 * @src: bytes from memory area
 * @dest: area destination
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
