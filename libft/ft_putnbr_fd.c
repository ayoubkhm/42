/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:07:04 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:07:04 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    if (n == 0)
    {
        write(fd, "0", 1);
        return;
    }

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }

    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }

    int reversed = 0;
    while (n != 0)
    {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }

    while (reversed != 0)
    {
        char digit = 48 + (reversed % 10);
        write(fd, &digit, 1);
        reversed /= 10;
    }
}
