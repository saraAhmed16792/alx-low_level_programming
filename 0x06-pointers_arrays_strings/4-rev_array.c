#include "main.h"
/**
 * reverse_array - that reverses the content of an array of integers
 * @a: array
 * @n: num of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
