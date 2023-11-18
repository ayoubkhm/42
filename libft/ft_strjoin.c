/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:07:42 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:07:42 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *joined_str;
    size_t i;
    size_t j;
    size_t len_s1;
    size_t len_s2;
    
    if(s1 == NULL || s2 == NULL)
    {
        return (NULL);
    }
    len_s1 = 0;
    while (s1[len_s1] != '\0')
    {
        len_s1++;
    }
    len_s2 = 0;
    while (s2[len_s2] != '\0')
    {
        len_s2++;
    }
    joined_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1))
    if (joined_str == NULL)
    {
        return (NULL);
    }
    i = 0;
    while(i < len_s1)
    {
        joined_str[i] = s1[i];
        i++;
    }
    j = 0;
    while(j < len_s2)
    {
        joined_str[i + j] = s2[j];
        j++;
    }
    joined_str[i + j] = '\0';
    
    return joined_str;
}
