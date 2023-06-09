#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - Checks if a number is prime
 *@n: Number input (integer)
 *@k: input k
 *Return: 1 if n is prime and 0 otherwise
 */
int prime_checker(int n, int k);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (prime_checker(n, 5));
}

/**
 *prime_checker - cheks for prime number
 *@n: input number
 *@k: input k
 *Return: returns 1 or 0
 */
int prime_checker(int n, int k)
{
	int sqr = k * k;

	if (sqr > n)
		return (1);
	else if (n % k == 0 || n % (k + 2) == 0)
		return (0);
	return (prime_checker(n, k + 6));
}
