#include "main.h"

/**
* _strncat - concatenates two strings with a number n
* @dest: parameter pointer
* @src: parameter pointer
* @n: number parameter
*
* Return - dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	l = len;

	while (i < n && src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
