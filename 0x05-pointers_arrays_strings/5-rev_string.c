#include "main.h"

/**
 * rev_string - func
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
int len, j, half;
char temp;

for (len = 0; s[len] != '\0'; len++)
	;

j = 0;

half = len / 2;

while (half--)
{
	temp = s[len - i - 1];
	s[len - i -1] = s[i];
	s[i] = temp;
	i++;
}
}
