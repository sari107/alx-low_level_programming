#include "main.h"

/**
 * strncpy -function copies a string
 * @dest : copies to
 * @src : copies from
 * @n : number of character
 * Return : dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dist[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++
	}


	return (dest);
}
