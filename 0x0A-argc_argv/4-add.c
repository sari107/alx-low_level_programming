#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{

	int sum = 0;
	
	if(argc <= 1)
	{
		printf("0\n");
	}

	else
	{

	for(int i=1;i < argc;i++)
	{
		if (atoi(argv[i]) != 0)
		{
			sum = sum + atoi(argv[i]);
		}
	
		else
		{
			printf("Error\n");
			return (1);
		}
	
	}
	printf("%d\n", sum);
	
	}


      return 0;
}
