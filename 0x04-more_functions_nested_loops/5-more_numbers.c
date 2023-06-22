#include "main.h"

/**
 * more_numbers - prints 10 times nums from 0 to 14, followed by a new n
 */
void more_numbers(void)
{
	int y, x;

	for (y = 1; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
