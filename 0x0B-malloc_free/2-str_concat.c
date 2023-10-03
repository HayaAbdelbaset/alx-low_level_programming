#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int t, pk;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	t = pk = 0;

	while (s1[t] != '\0')
		t++;

	while (s2[pk] != '\0')
		pk++;

	conct = malloc(sizeof(char) * (t + pk + 1));

	if (conct == NULL)
		return (NULL);

	t = pk = 0;

	while (s1[t] != '\0')
	{
		conct[t] = s1[t];
		t++;
	}

	while (s2[pk] != '\0')
	{
		conct[t] = s2[pk];
		t++, pk++;
	}

	conct[t] = '\0';

	return (conct);
}
