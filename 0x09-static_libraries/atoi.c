#include "main.h"

int	is_space(char c)
{
		return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_atoi( char *s)
{
	int	sign;
	int	res;


	sign = -1;
	while (is_space(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;	
	}
	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res -= *s - '0';
		s++;
	}
	return (sign * res);
}
