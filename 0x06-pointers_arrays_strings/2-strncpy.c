#include "main.h"

/**
 * _strncpy -func
 * @dest : pointer
 * @src : pointer
 * Return Void
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (src[n] !='\0')
	{
		dist[n] = src[n];
		n++;
	}
	dist[n] ='\0';

	return dist;
}
