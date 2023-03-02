#include "main.h"

/**
* *_strncpy - a function that copies a string
 * @dest: pointer to the string to be concatenated upon.
 * @src: pointer to source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')

	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
		while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
