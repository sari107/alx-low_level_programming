#include "main.h"

/**
 * _strncat -func
 * @dest : pointer
 * @src : pointer
 * Return :Void
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = -1, j;

	for(j=0; dest[j] <= n;j++)

		do{
			i++;
			dest[j] = src [i];
			j++;
		}while(src[i] !='\0');
return (dest);
}

