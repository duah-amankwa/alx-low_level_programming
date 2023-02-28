#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower case alphabets in reverse
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char i;

	/* loops through and prints the alphabets in reverse */
	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
