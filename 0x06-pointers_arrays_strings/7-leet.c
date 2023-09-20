#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int u, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (u = 0; n[u] != '\0'; u++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[u] == s1[j])
			{
				n[u] = s2[j];
			}
		}
	}
	return (n);
}
