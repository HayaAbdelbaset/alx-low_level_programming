#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{
	char lol;

	for (lol = 'a'; lol <= 'z'; lol++)
	putchar(lol);

	for (lol = 'A'; lol <= 'z'; lol++)
	putchar(lol);
	putchar('\n');

	return (0);
}
