#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int o, sum, n;

	sum = 0;

	srand(time(NULL));

	for (o = 0; o < 100; o++)
	{
		pass[o] = rand() % 78;
		sum += (pass[o] + '0');
		putchar(pass[o] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
