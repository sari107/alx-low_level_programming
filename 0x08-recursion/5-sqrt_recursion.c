#include "main.h"
/**
 * a function that returns square root of a number in recursion
 * Return
 */

/**
 * A function prints a squareroot
 * int n
 * return
 */

int _sqrt_recursion(int n) 
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * evaluate the function
 * int n, int x
 * return
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);	
	return (_sqrt(n + 1, x));
}
