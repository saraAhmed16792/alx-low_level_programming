#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: number to be treated
 * Return: value of the last digit of number
 */

int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;
	if (lastD < 0)
	{
		lastD = lastD * -1;
	}
	_putchar(lastD + '0');
	return (lastD);
}
