#include "main.h"

/**
 * _isalpha - Checks if a charaacter is an alphabet
 * @c: type int character
 * Return: 1 if an alphabet, else 0
 *
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 94) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
