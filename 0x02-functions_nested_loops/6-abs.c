#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @c: number to be checked
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
