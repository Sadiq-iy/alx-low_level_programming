#include "main.h"

/**
 * _isdigit - checks if a parameter is between 0 and 9.
 * @c: input number
 * Return: 1 if a number is (0 to 9), 0 in other case
 */
 int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
