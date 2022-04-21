#include "main.h"
/**
 * *_strcpy - copies string pointed
 * @dest: copy of the string
 * @src: origin of the string
 * Return: destiantion copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] !=  '\0');

	return (dest);
}
