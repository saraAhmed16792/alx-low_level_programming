#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatentate of the 2 strings
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = x = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[x] != '\0')
		x++;

	conct = malloc(sizeof(char) * (i + x + 1));

	if (conct == NULL)
		return (NULL);

	i = x = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[x] != '\0')
	{
		conct[i] = s2[x];
		i++;
		x++;
	}

	conct[i] = '\0';

	return (conct);
}
