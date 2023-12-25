#include "ft_printf.h"
#include "stdio.h"

int	print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
