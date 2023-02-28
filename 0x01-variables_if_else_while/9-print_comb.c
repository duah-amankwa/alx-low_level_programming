#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*Printing all possible combinations of single digit numbers */
	for(char i = '0'; i <= '9'; i++)
    {
    	putchar(i);
        putchar(',');
	putchar('');
    }
	return(0);
}
