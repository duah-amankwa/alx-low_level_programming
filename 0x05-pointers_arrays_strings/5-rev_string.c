#include "main.h"

/**
* rev_string - Variable to  reverse a string
* @s: name of the variable char
* Return: string
**/
void rev_string(char *s)
{
int i = 0;
int j;
char c;
char d;

while (s[i] != '\0')
{
i++;
}
i--;
for (j = 0; j < i; j++)
{
c = s[j];
d = s[i];
s[j] = d;
s[i] = c;
i--;
}
}
