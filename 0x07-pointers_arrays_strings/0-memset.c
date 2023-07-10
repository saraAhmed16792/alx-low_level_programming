#include "main.h"
/**
 * _memset - that fills memory with a constant byte.
 * The _memset() function fills the first n bytes of the memory  * area pointed to by s with the constant byte b
 * @s: output
 * @b: input
 * @n: num of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
