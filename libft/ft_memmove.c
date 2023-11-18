/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:06:39 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:06:39 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *pdest;
    unsigned char *psrc;
    
    pdest = (unsigned char *)dest;
    psrc = (const unsigned char *)src;

    if(psrc < pdest)
    {
        psrc = psrc + n;
        pdest = pdest + n;
        while (n != 0) {
            *--pdest = *--psrc;
            n--;
        }
    }
    
    else
    {
        while (n != 0)
        {
            *pdest++ = *psrc++;
            n--;
        }
    }
    
    return (dest);
}
