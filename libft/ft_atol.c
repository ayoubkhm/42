#include "libft.h"

long	ft_atol(char *str)
{
	long	atoi;
	int		negative;

	atoi = 0;
	negative = 1;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = negative * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		atoi = atoi * 10 + (*str) - 48;
		str++;
	}
	return (atoi * negative);
}
