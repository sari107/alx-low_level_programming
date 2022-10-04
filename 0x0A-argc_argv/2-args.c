#include "main.h"
#include "stdio.h"
/**
 * main function prints all arguments
 * @argc
 * @argv
 * print
 */
int main(int argc, char *argv[])
{
	int i = 0;
	if(argc > 0)
	{

      	while(i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	}

	return(0);
}
