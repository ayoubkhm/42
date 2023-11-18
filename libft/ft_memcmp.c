/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:06:31 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:06:31 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;
    
    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;

    while (n != 0)
    {
        if (*p1 != *p2)
        {
            return (*p1 - *p2);
        }
        p1++;
        p2++;
        n--;
    }
    return (0);
}
