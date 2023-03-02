#include "main.h"

/**
 * *_strncat- A function that concatenates two strings
 * 
 * @dest: input value
 * @src:input value
 * @n: input value
 *
 * Return : A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[1] = src[j];
		i++;
		j++
	}
	dest[1] = '\0';
	return (dest);

}
