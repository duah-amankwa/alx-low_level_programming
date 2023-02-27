#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s : The name of the variable char
 * 
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
