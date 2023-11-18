/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:06:34 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:06:34 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{

    unsigned char *pdest;
    unsigned char *psrc;
    
    pdest = (unsigned char *)dest;
    psrc = (const unsigned char *)src;

    while (n != 0)
    {
        *pdest = *psrc;
        pdest++;
        psrc++;
        n--;
    }
    return (dest);
}
