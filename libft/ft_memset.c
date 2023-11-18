/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:06:43 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:06:43 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *str;
    
    str = (unsigned char *)ptr;
    while (num > 0)
    {
        *str = (unsigned char)value;
        str++;
        num--;
    }
}
