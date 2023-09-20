#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int e;
	int r;

	for (e = 0; e < n--; e++)
	{
		r = a[e];
		a[e] = a[n];
		a[n] = r;
	}
}

