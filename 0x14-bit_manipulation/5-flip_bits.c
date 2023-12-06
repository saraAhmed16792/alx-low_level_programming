#include "main.h"
/**
 * flip_bits - func that returns num of bits you need to flip
 * @n: 1st num
 * @m: 2nd num
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
