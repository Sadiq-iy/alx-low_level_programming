#include <stdio.h>
/**
 * main -Hexadecimal
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		purchar(c);
	}

	putchar('\n');

	return (0);
}