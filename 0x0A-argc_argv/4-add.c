#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 *
 *
 *
 *
 */

int main(int agrc, char *argv[])
{
	int i = 1;
	int sum = 0;
	 if(argc > 1)
	 {
		 while(i < argc)
		 {
			 if(isdigit(argv[i]))
			 {
				 sum = sum + argv[i];
				 i++
			 }

			 else
			 {
				 printf("Error\n");
				 return (1);
			 }
		 }
		 printf("%d\n", sum);
	 }

	 else
	 {
		 printf("0\n");
	 }
	 return (0);
}
