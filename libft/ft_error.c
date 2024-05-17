#include "libft.h"

int	ft_error(void)
{
	write(2, "Error\n", 6);
	return (-1);
}
