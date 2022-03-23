#include "main.h"

/**
* _strncat - concatenates two strings with a number n
* @dest: parameter pointer
* @src: parameter pointer
* @n: number parameter
*
* Return - dest
*
* _strlen - returns the length of a string
* @s: parameter
*
* Return: int
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char *_strncat(char *dest, char *src, int n)
{
	int l = _strlen(dest);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
