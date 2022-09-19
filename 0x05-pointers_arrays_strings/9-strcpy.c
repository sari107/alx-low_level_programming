#include "main.h"

/**
 * *_strcpy - func
 * @dest : pointer
 * @src : pointer
 * Description: copy the string pointed to by pointer
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
