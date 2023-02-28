#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int i;
	/*Printing all possible combinations of single digit numbers */
	for(i =0; i < 10 ; i++)
    {
    	putchar((i% 10) + '0');
		if (i == 9)
			continue;
	putchar(',');
	putchar(' ');
    }
	putchar('\n');
	return(0);
}
