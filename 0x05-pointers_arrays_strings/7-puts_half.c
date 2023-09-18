#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int w, n, longi;

	longi = 0;

	for (w = 0; str[w] != '\0'; w++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (w = n; str[w] != '\0'; w++)
		_putchar(str[w]);
			_putchar('\n');
}

