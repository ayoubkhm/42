/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:08:15 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:08:15 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strnstr(const char *str, const char *to_find, unsigned int n)
{
    if(to_find[0] == '\0')
    {
        return(str);
    }
    int i;
    int j;
    
    i = 0;
    while((str[i] != '\0') && (i < n))
    {
        if(str[i] == to_find[0])
        {
            j = 0;
            while((str[i + j] == to_find[j]) && (i + j < n))
            {
                if(to_find[j + 1] == '\0')
                {
                    return(str + i);
                }
                j++;
            }
        }
        i++;
    }
    return(NULL);
}
