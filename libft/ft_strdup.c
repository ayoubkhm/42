/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:07:26 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:07:26 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int    ft_strlen(char* str)
{
    size_t i;
    i = 0;
    
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}


char *ft_strcpy(char *dest, const char *src)
{
    unsigned int i;

    i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strdup(const char *s)
{
    char *new_str;
    size_t length;

    length = ft_strlen(s);
    new_str = malloc((length + 1) * sizeof(char));
    if (new_str == NULL)
        return (NULL);
    ft_strcpy(new_str, s);
    
    return new_str;
}