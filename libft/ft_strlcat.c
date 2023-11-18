/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:07:48 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:07:48 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int    ft_strlen(char* str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}


size_t ft_strlcat(char *dest, char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;
    
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = dest_len;
    
    if(size <= dest_len)
    {
        return(size + src_len);
    }
    
    while(i < size - 1 && src[i - dest_len] != '\0')
    {
        dest[i] = src[i - dest_len];
        i++;
    }
    if(i < size)
        dest[i] = '\0';
    return(dest_len + ft_strlen(src + (i - dest_len)));
}
