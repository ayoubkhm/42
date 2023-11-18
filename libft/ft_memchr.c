/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:06:27 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:06:27 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memchr(const void *ptr, int value, size_t num)
{
    const unsigned char *str = ptr;

    while(num--)
    {
        if(*str == (unsigned char)value)
            return (void *)str;
        str++;
    }
    return NULL;
}
