#include "main.h"
/**
 * _isalpha - program checks for alphabetic characters
 * @c: the characters to be checked
 * Return: 1 if c is letter ,0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
