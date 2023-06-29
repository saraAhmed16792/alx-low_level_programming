#include "main.h"
#include <stdio.h>

/**
 * _strcat - that concatenates two strings.
 * @dest: destination of the string
 * @src: source of the string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, i;
	
	while (dest[l])
	{
		l++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[l]  = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
