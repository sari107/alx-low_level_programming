#include "main.h"

/**
 * *_strcat - func
 * @dest : pointer
 * @src : pointer
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int i = -1, j;
for (j = 0; dest[j] != '\0'; j++)
	;

do {
	i++;
	dest[j] = src[i];
	j++;
} while (src[i] != '\0');

return (dest);
}
