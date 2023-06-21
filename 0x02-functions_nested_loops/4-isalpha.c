#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: charcter to be checked
 * Return: 1 for alphabetic character , 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && 122))
	{
		return (1);
	}
	return (0);
}
