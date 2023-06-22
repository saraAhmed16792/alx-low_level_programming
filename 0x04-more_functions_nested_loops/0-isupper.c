#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: charcter to be checked
 * Return: 1 it is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
