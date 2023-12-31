#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int t = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for ( ; t < q ; t++)
	{
		dest[t] = src[t];
	}
	dest[q] = '\0';
	return (dest);
}
