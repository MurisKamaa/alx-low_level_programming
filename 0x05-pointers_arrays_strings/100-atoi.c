#include <stdio.h>
#include "main.h"
/**_atoi - Converts a string into an integer
 *@s: input string
 *Return: Returns the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int j = 0;
	int nb;

	if (s[j] == '-')
	{
		sign = -1;
		j++;
	}
	else if (s[j] == '+')
		j++;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			nb = nb * 10 + (s[i] - '0');
		}
		else
			break;
		i++;

	}
	return (sign * nb);
}
