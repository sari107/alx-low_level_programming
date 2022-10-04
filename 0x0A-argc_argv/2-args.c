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
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return(0);
}
