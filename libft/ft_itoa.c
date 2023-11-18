/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:06:24 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:06:24 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t get_num_length(int n)
{
    size_t length;

    if (n <= 0)
        length = 1;
    else
        length = 0;

    while (n != 0)
    {
        length++;
        n = n / 10;
    }

    return length;
}

char *ft_itoa(int n)
{
    size_t length = get_num_length(n);
    char *str = (char *)malloc(sizeof(char) * (length + 1));
    if (str == NULL)
        return NULL;

    str[length] = '\0';
    if (n == 0)
    {
        str[0] = 48;
    }
    else
    {
        size_t i = length;
        if (n < 0)
        {
            str[0] = '-';
        }
        while (n != 0)
        {
            i--;
            int digit = n % 10;
            if (digit < 0)
                digit = -digit;
            str[i] = 48 + digit;
            n /= 10;
        }
    }

    return str;
}
