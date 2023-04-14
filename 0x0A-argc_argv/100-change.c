#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int cents;
	int quarters;
	int dimes;
	int nickles;
	int twos;
	int ones;
	int total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	quarters = cents / 25;
	cents %= 25;
	dimes = cents / 10;
	cents %= 10;
	nickles = cents / 5;
	cents %= 5;
	twos = cents / 2;
	cents %= 2;
	ones = cents;
	total = quarters + dimes + nickles + twos + ones;
	printf("%d\n", total);
	return (0);
}
