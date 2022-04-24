#include "main.h"
/**
 * *_strncat - concatenetes two strings
 * @dest: inout parameter string
 * @src: input parameter string
 * @n: times to iteration
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;


	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
