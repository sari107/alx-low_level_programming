#include "main.h"
/**
 * prime number
 * return
 */

int is_prime_number(int n)
{
	int m;
	m = 2;
	if(n < 2)
	{
		return (0);
	}
	if(n == 2)
	{
		return (1);
	}
	return (is_prime(n,m));
}

int is_prime(int n, int m)
{
	if(m == n -1)
		retutn (1);
	else if(n % m == 0)
		return (0);
	if(n % m != 0)
	{
	return (is_prime(n, m + 1));
	}
	return (0);
}
