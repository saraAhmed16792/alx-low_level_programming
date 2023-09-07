#include "main.h"

/**
 * _puts - prints string followed by new n
 * @str: pointer to the string 
 */

void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert string to int
 * @s: char type string
 * Return: int
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, num1, i;
	
	for (num1 = 0; !(s[num1] >= 48 && s[num1] <= 57); num1++)
	{
		if (s[num1] == '-')
		{
			sign *= -1;
		}
	}

	for (i = num1; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an int
 * @n: int 
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;
	
	for (i = 0; n / divisor > 9; i++, divisor *= 10);
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n /divisor;
		_putchar('0' + resp);
	}
}

/**
 * main - print result of the multiplication
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1] * _atoi(argv[2]));
			_putchar('\n');

			return (0);
}

