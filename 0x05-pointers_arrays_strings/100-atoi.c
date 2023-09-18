#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int y, d, n, len, f, digit;

	y = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (y < len && f == 0)
	{
		if (s[y] == '-')
			++d;

		if (s[y] >= '0' && s[y] <= '9')
		{
			digit = s[y] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[y + 1] < '0' || s[y + 1] > '9')
				break;
			f = 0;
		}
		y++;
	}

	if (f == 0)
		return (0);

	return (n);
}
