#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
	char lrr;

	for (lrr = 'z'; lrr >= 'a'; lrr--)
	putchar(lrr);
	putchar('\n');

	return (0);
}
