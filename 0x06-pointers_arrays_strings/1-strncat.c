#include <main.h>
/**
 * _strncat- Concatenates two strings using inputted numbers
 * @dest: pointer to destination to be appended upon
 * @src:pointer to string to be appended to dest
 * @n: the number of bytes from src
 *
 * Return : A poiniter to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int aray = 0, d_count = 0;

	while (dest[aray++])
	{
		d_count++;
	}

	for (aray = 0; src[aray]; aray++)
	{
		dest[d_count++] = src[aray];
	}

	return (dest);
}
