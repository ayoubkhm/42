/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:07:21 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:07:21 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strchr(char* str, char c)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
            return(&str[i]);
        i++;
    }
    if(str[i] == c)
    {
        return(&str[i]);
    }
    return(NULL);
}
