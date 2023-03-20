#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		num = n * -1;
	else
		num = n;
	if ((num % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, num % 10);
	else if ((num % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, num % 10);
	else if ((num % 10) < 6 && (num % 10) != 0 )
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num % 10);
	return (0);
}
