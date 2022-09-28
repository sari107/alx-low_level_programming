#include "main.h"
/**
 * square root of numbers
 * Return 
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * evaluate the function
 * return
 */

int _sqrt(int n, int x)
{
	if (n > x/2)
		return (-1);
	else if (n * n == x)
		return (n);	
	return (_sqrt(n + 1, x));
}	
