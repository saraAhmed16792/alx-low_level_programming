#include <stdio.h>
#include "main.h"

/**
 * main -  print num of argu
 * @argc: num of argus
 * @argv: array of argus
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
