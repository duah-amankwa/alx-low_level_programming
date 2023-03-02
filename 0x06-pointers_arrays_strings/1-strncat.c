#include <main.h>
/**
 * _strncat- Concatenates two strings using inputted numbers
 * @dest: pointer to destination to be appended upon
 * @src:pointer to string to be appended to dest
 * @n: the number of bytes from src
 *
 * Return : A poiniter to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (n <= 0)
	{
		return (dest);
	}

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i++] = '\0';
	return (dest);
}
