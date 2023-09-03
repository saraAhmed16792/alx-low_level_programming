#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: num of argu
 * @argv: array of argu
 * Return: 0
 */
int main(int argc __attrubute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
