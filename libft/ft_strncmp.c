/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:08:12 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:08:12 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_strncmp(char *str1, char *str2, int n)
{
    int i;
    
    i = 0;
    while(((i < n) && (str1[i] != '\0')) && (str2[i] != '\0'))
    {
        if(str1[i] != str2[i])
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        else
            i++;
        }
    if(i < n)
        return (unsigned char)str1[i] - (unsigned char)str2[i];
    return(0);
}
