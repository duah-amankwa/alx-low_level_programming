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
	int aray = 0, src_cnt = 0;

	while (src[aray++])
	{
		src_cnt++;
	}

	for (aray = 0; src[aray] && aray < n; aray++)
	{
		dest[aray] = src[aray];
	}

	for (aray = src_cnt; aray < n; aray++)
	{
		dest[aray] = '\0';
	}

	return (dest);
}
