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
	if(argc == 3)
	{

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%d\n", a*b);

	return (0);

	}

		printf("Error\n");
		return (1);
	
}
