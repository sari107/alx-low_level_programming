#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 *
 *
 *
 *
 */

int main(int argc, char *argv)
{
	int i = 0;
	int multply = 1;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		while(i < argc)
		{
			multiply = multiply * atoi(argv[i]);
		}
		printf("%d\n", multiply);
	}
	return (0);
}
