/* The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found */
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
		if (*s == accept[w])
		return (s);
		}
	s++;
	}
	return ('\0');
}

