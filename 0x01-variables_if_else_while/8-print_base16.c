#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
	int d;
	char lop;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (lop = 'a'; lop <= 'f'; lop++)
	putchar(lop);
	putchar('\n');

	return (0);
}
