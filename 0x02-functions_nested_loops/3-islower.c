#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: charcter to be checked
 * Return: 1 for lowercase , 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
