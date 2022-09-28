#include "main.h"
/**
 * prime number
 * return
 */

int is_prime_number(int n)
{
	int m = n / 2;
	if(n <= 1)
		return (0);
	return (is_prime(n,m));
}

int is_prime(int n, int m)
{
	if(m <= 1)
		retutn (1);
	else if(n % m == 0)
		return (0);
	return (is_prime(n, m-1));
}
