#include "main.h"

/**
 * main - a function tha returns the length of a string
 *
 * Return: Always 0
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
