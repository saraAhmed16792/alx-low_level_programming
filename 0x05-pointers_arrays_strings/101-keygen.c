#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random paswads
 * Return: 0;
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2000)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2500 - sum);
	return (0);
}
