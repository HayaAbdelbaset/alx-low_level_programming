#include "main.h"
/**
 *  _strlen_recursion - returns the length of a string.
 *  @s: The sring is measured
 *  Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int L = 0;

	if (*s > '\0')
	{
		L++;
		L += _strlen_recursion(s + 1);
	}
	return (L);
}


