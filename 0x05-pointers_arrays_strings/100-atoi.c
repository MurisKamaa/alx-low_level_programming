#include <stdio.h>
#include "main.h"
/**_atoi - Converts a string into an integer
 *@s: input string
 *Return: Returns the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int i;
	int nb;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;

	while (s[i] != '\0')
	{
		if (s[i] => '0' && s[i] <= '9')
		{
			nb = nb * 10 + (s[i] - '0');
		}
		else
			break;
		i++;

	}
	return (sign * nb);
}
