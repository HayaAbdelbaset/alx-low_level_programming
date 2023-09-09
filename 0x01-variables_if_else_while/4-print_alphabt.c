#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry poin
 * Return: 0 (Success)
 */

int main(void)

{
	char lol, e, q;

	e = 'e';
	q = 'q';

	for (lol = 'a'; lol <= 'z'; lol++)
	{
	if (lol != e && lol != q)
	putchar(lol);
	}
	putchar('\n');
	return (0);
}
