#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, x, y = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			str[y] = av[i][x];
			y++;
		}
		if (str[y] == '\0')
		{
			str[y++] = '\n';
		}
	}
	return (str);
}
