#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer parameter
*
* Return: void
*/

void rev_string(char *s)
{
	int a, b;
	char c;

	for (a = '\0'; s[a] != 0; a++)
	{
	}
	b = 0;
	putchar('\n');
	for (a = a - 1; b < a; b++)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a--;
	}
}
